QIF 2.1 C++ bindings for Visual Studio 2005 using CodeSynthesis XSD 3.3

***************************************************************************
NOTICE: the CodeSynthesis XSD generated bindings can be used freely in any
open source application. If used for commercial purposes then a commercial
license must be obtained. Details can be found at:
http://www.codesynthesis.com/products/xsd/
***************************************************************************

CodeSynthesis XSD 3.3 can be downloaded from:
http://www.codesynthesis.com/download/xsd/3.3/windows/i686/xsd-3.3.msi

Once installed, add an environment variable MYXSDPATH set to the fully
qualified path of the CodeSynthesis XSD.exe tool, usually:
"C:\Program Files (x86)\CodeSynthesis XSD 3.3\bin\xsd.exe"

You are now ready to build QIF 2.1 C++ bindings.

Configurations:
DLL, wide character: Release/Debug 
DLL, narrow character: ReleaseNchar/DebugNchar 
Static library, wide character: ReleaseLib/DebugLib
Static library, narrow character: ReleaseLibNchar/DebugLibNchar

To incorporate the C++ bindings in your application add the following
paths to Configuration Properties->C++->General->Additional Include Directories:
..\QIF_21\QIF_21
..\QIF_XSD
(This assumes the QIF_21 and QIF_XSD folders are at the same folder level as your
application folder.)

For static library bindings add the define QIF_STATIC_LIBS to 
Configuration Properties->C++->Preprocessor->Preprocessor Definitions.

For the following configurations add these inputs to
Configuration Properties->Linker->Input->Additional Dependencies:

Release:
..\QIF_21\x64\Release\QIF_21_vc80.lib
..\QIF_XSD\lib64\xerces-c_3.lib
(add QIF_21_vc80.dll to your installation)

Debug:
..\QIF_21\x64\Debug\QIF_21_vc80D.lib
..\QIF_XSD\lib64\xerces-c_3D.lib
(add QIF_21_vc80D.dll and QIF_21_vc80D.pdb to your installation)

ReleaseNchar:
..\QIF_21\x64\ReleaseNchar\QIF_21_vc80N.lib
..\QIF_XSD\lib64\xerces-c_3.lib
(add QIF_21_vc80N.dll to your installation)

DebugNChar:
..\QIF_21\x64\DebugNChar\QIF_21_vc80ND.lib
..\QIF_XSD\lib64\xerces-c_3D.lib
(add QIF_21_vc80ND.dll and QIF_21_vc80ND.pdb to your installation)

ReleaseLib:
..\QIF_21\x64\ReleaseLib\QIF_21_vc80LIB.lib
..\QIF_XSD\lib64\xerces-c_3.lib

DebugLib:
..\QIF_21\x64\DebugLib\QIF_21_vc80LIBD.lib
..\QIF_XSD\lib64\xerces-c_3D.lib

ReleaseLibNchar:
..\QIF_21\x64\ReleaseLibNchar\QIF_21_vc80LIBN.lib
..\QIF_XSD\lib64\xerces-c_3.lib

DebugLibNchar:
..\QIF_21\x64\ReleaseLibNchar\QIF_21_vc80LIBND.lib
..\QIF_XSD\lib64\xerces-c_3D.lib

(Again, this assumes the QIF_21 and QIF_XSD folders are at the same folder level as your
application folder.)