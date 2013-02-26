# XFF-Filter4TMG

XFF-Filter for Forefront Threat Management Gateway (TMG) 2010 adds the x-forwarded-for header to http header collection. This is often needed in web environments that require the source address for various reasons. For example for security, fingerprinting, routing or geomapping.

>The X-Forwarded-For (XFF) HTTP header field is a de facto standard for identifying the originating IP address of a client connecting to a web server through an HTTP proxy or load balancer. This is an HTTP request header which was introduced by the Squid caching proxy server’s developers. An effort has been started at IETF for standardizing the Forwarded HTTP header.


## Overview

This repository contains the source code for the binary distribution of the [XFF-Filter4TMG][blog] that Gabriel Citron originally provided in a blog post in Romanian (thanks Google Translate). I asked Gabriel is he could provide the source code and make it opensource. He quickly responded with the code and now I provide it on github. 

His translated post:
>After moving a publishing web application behind a TMG reverse proxy I got into trouble as it turned out that TMG does not support the X-Forwarded-For header in http requests to retrieve the originating client ip address. After some googling I found a plugin from Websense and a criminally expensive version from Winfrasoft. I then decided to implement my own 64 bit webfilter for TMG 2012 based on an example provided with the TMG SDK.


## Behavior

It seems that the filter behaves as described on xff article on wikipedia.

* Create the X-Forwarded-For header and set its value to the value from `REMOTE_ADDR`
* When the header already exists the `REMOTE_ADDR` value is prepended with a comma to the existing value (client1, proxy1, proxy2, etc.)

## Download

You can [download the XFF-Filter4TMG source via github][source], [clone the github repository][git] or [download the XFF-Filter4TMG binary][binary] in an archive


## Installation

Take the following steps:

* Extract the archive
* Move the file `XFF-Filter.dll` to the folder where TMG is installed (eg `C: \Program Files\Microsoft Forefront Threat Management Gateway`)
* Register the DLL with `regsvr32`

The filter should now be visible in the TMG console and can be enabled / disabled.


## License

The code is licensed under a [Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License][license]

[blog]: http://itboard.ro/blogs/jurnal_de_vet/archive/2011/03/30/x-forwarded-for-pentru-tmg.aspx
[wikipedia]: http://en.wikipedia.org/wiki/X-Forwarded-For
[license]: http://creativecommons.org/licenses/by-nc-sa/3.0/
[binary]: http://ramonsmits.com/downloads/XFF-Filter4TMG.zip
[source]: https://github.com/ramonsmits/XFF-Filter4TMG/archive/master.zip
[git]: git://github.com/ramonsmits/XFF-Filter4TMG.git