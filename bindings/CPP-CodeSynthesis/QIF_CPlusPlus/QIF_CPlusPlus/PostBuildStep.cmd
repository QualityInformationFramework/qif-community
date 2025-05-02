@echo off
if [%2] == ["Release"] (
	goto :release
)

if [%2] == ["Debug"] (
	goto :debug
)

@echo "Usage: PostBuildStep.cmd <targetdir> <"Release" or "Debug">"
exit /b 1

:release
@echo on
copy /Y /D "C:\dev\qif-community\bindings\CPP-CodeSynthesis\QIF_30\x64\Release\QIF_30.dll" "%~1"
copy /Y /D "C:\dev\xsd\bin\release\xerces-c-3.2.dll" "%~1"
exit /b 0

:debug
@echo on
copy /Y /D "C:\dev\qif-community\bindings\CPP-CodeSynthesis\QIF_30\x64\Debug\QIF_30D.dll" "%~1"
copy /Y /D "C:\dev\qif-community\bindings\CPP-CodeSynthesis\QIF_30\x64\Debug\QIF_30D.pdb" "%~1"
copy /Y /D "C:\dev\xsd\bin\debug\xerces-c-3.2.dll" "%~1"