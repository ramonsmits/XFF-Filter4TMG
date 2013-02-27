#import "_midl\msfpccom.tlb" rename_namespace("ISALIB") named_guids

#pragma warning(disable:4710)

// This will be the filter GUID.
const char StrGuid[] = "{87F18571-C71D-4a2f-1313-FE0927AB0B51}";

// This is the filter's relative path to Forefront TMG root.
// E.g. If Forefront TMG is installed in "\Program Files\Microsoft Forefront Threat Management Gateway" Then
// you should copy your XFF-Filter.dll to
// <Forefront TMG installation point>\XFF-Filter.dll
// (Typically <Forefront TMG installation point> will be \Program Files\Microsoft Forefront Threat Management Gateway)
const char FilterRelativePath[] = "XFF-Filter.dll";


HRESULT RegisterWebFilter(bool fRegister);
/////////////////////////////////////////////////////////////////////////////
// DllRegisterServer - Adds entries to the system registry
STDAPI DllRegisterServer(void)
{
	HRESULT hr = RegisterWebFilter(true);
	return FAILED(hr) ? S_FALSE : S_OK;
}

/////////////////////////////////////////////////////////////////////////////
// DllUnregisterServer - Removes entries from the system registry

STDAPI DllUnregisterServer(void)
{
	HRESULT hr = RegisterWebFilter(false);
	return hr;
}


HRESULT RegisterWebFilter(bool fRegister)
{
	HRESULT hr = S_OK;

	// Get instance of filter admin object.
	hr = CoInitialize(NULL);
	if (FAILED(hr))
	{
		return hr;
	}
	else
	{
		ISALIB::IFPCPtr pIISA;

		hr = CoCreateInstance(
			ISALIB::CLSID_FPC,
			NULL,
			CLSCTX_INPROC_SERVER,
			ISALIB::IID_IFPC,
			(void**)&pIISA);

		if (FAILED(hr) || (pIISA == NULL))
		{
			CoUninitialize( );
			return hr;
		}

		ISALIB::IFPCArrayPtr pIISAArr;
		ISALIB::IFPCExtensionsPtr pIExtensions;
		ISALIB::IFPCWebFiltersPtr pWebFilters;
		ISALIB::IFPCWebFilterPtr pFilter;

		try
		{
			pIISAArr = pIISA->GetContainingArray();
			pIExtensions = pIISAArr->Extensions;
			pWebFilters = pIExtensions->WebFilters;
		}
		catch(_com_error& err)
		{
			hr = err.Error();
			CoUninitialize( );
			return hr;
		}

		if (fRegister)
		{
			try
			{
				pFilter =  pWebFilters->Add(StrGuid,"X-Forwarded-For",FilterRelativePath,ISALIB::fpcFilterPriority_High,ISALIB::fpcFilterDirectionReverse);
				pFilter->PutDescription("Add ClientIP in X-Forwarded-For header for reverse-proxy requests - Gabriel Citron <gcitron@gmail.com>");
				pFilter->PutVendor("Gabriel Citron");
				pFilter->PutVersion("1.1");
				pWebFilters->Save(VARIANT_FALSE, VARIANT_TRUE);
			}
			catch(_com_error& err)
			{
				if(err.Error() != HRESULT_FROM_WIN32(ERROR_ALREADY_EXISTS))
				{
					hr = err.Error();
				}
			}
		}
		else
		{
			try
			{
				pWebFilters->Remove(StrGuid);
				pWebFilters->Save(VARIANT_FALSE, VARIANT_TRUE);
				pWebFilters->Refresh();
			}
			catch(_com_error& err)
			{
				if(err.Error() != HRESULT_FROM_WIN32(ERROR_FILE_NOT_FOUND))
				{
					hr = err.Error();
				}
			}
		}
	}

	CoUninitialize( );
	return hr;
}
