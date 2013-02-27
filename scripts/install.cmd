REM ===============================================================
REM http://itboard.ro/blogs/jurnal_de_vet/archive/2011/03/30/x-forwarded-for-pentru-tmg.aspx
REM ===============================================================

REM Copy filter to TMG application folder
copy XFF-Filter.dll "C:\Program Files\Microsoft Forefront Threat Management Gateway"

REM registering the DLL with regsvr32 and then filter visible in list TMG console, which can be enabled / disabled:
regsvr32 "C:\Program Files\Microsoft Forefront Threat Management Gateway\XFF-Filter.dll"