# C++ Source Code Binding Generator for QIF 3.0 - CodeSynthesis

These C++ bindings use [CodeSynthesis](https://codesynthesis.com/) to generate C++ code that can read and write QIF 3.0. 

## Part 1: QIF_CPlusPlus application

### Step 1: 

Copy the QIF 3.0 schema files to `QIF_30\QIFApplications` and `QIF_30\QIFLibrary`. Do not overwrite `QIFDocument.xsd`.

### Step 2: 

Build the `QIF_30` library using the instructions below in Part2 

### Step 3: 

Build the `QIF_CPlusPlus` application


## Part 2: QIF_30 library generation 

Those configurations marked * are compatible with QIF_CPlusPlus.

### QIF 3.0 C++ bindings for Visual Studio 2005 using CodeSynthesis XSD 3.3

**NOTICE: the CodeSynthesis XSD generated bindings if used for commercial purposes then a commercial license must be obtained. Details can be found at: http://www.codesynthesis.com/products/xsd/**

CodeSynthesis XSD 3.3 can be downloaded from:
http://www.codesynthesis.com/download/xsd/3.3/windows/i686/xsd-3.3.msi

You are now ready to build QIF 3.0 C++ bindings.

Configurations:
DLL, wide character: `Release/Debug`
DLL, narrow character: `ReleaseNchar/DebugNchar`
Static library, wide character: `ReleaseLib/DebugLib`
Static library, narrow character: `ReleaseLibNchar/DebugLibNchar`

To incorporate the C++ bindings in your application add the following paths to Configuration Properties->C++->General->Additional Include Directories:
* `..\QIF_30\QIF_30`
* `C:\Program Files (x86)\CodeSynthesis XSD 3.3\include`

(This assumes the QIF_30 and QIF_XSD folders are at the same folder level as your application folder.)

For static library bindings add the define `QIF_STATIC_LIBS` to Configuration Properties->C++->Preprocessor->Preprocessor Definitions.

For the following configurations add these inputs to Configuration Properties->Linker->Input->Additional Dependencies:

**Release**:

```
..\QIF_30\x64\Release\QIF_30_vc80.lib
C:\Program Files (x86)\CodeSynthesis XSD 3.3\lib64\vc-10.0\xerces-c_3.lib
```

(Then, add `QIF_30_vc80.dll` to your installation)

**Debug**:

```
..\QIF_30\x64\Debug\QIF_30_vc80D.lib
C:\Program Files (x86)\CodeSynthesis XSD 3.3\lib64\vc-10.0\xerces-c_3D.lib
```

(Then, add `QIF_30_vc80D.dll` and `QIF_30_vc80D.pdb` to your installation)

**ReleaseNchar**:

```
..\QIF_30\x64\ReleaseNchar\QIF_30_vc80N.lib
C:\Program Files (x86)\CodeSynthesis XSD 3.3\lib64\vc-10.0\xerces-c_3.lib
```

(Then, add `QIF_30_vc80N.dll` to your installation)

**DebugNChar**:

```
..\QIF_30\x64\DebugNChar\QIF_30_vc80ND.lib
C:\Program Files (x86)\CodeSynthesis XSD 3.3\lib64\vc-10.0\xerces-c_3D.lib
```

(add `QIF_30_vc80ND.dll` and `QIF_30_vc80ND.pdb` to your installation)

**ReleaseLib** \*:

```
..\QIF_30\x64\ReleaseLib\QIF_30_vc80LIB.lib
C:\Program Files (x86)\CodeSynthesis XSD 3.3\lib64\vc-10.0\lib64\xerces-c_3.lib
```

**DebugLib** \*:

```
..\QIF_30\x64\DebugLib\QIF_30_vc80LIBD.lib
C:\Program Files (x86)\CodeSynthesis XSD 3.3\lib64\vc-10.0\lib64\xerces-c_3D.lib
```

**ReleaseLibNchar**:

```
..\QIF_30\x64\ReleaseLibNchar\QIF_30_vc80LIBN.lib
C:\Program Files (x86)\CodeSynthesis XSD 3.3\lib64\vc-10.0\lib64\xerces-c_3.lib
```

**DebugLibNchar**:

```
..\QIF_30\x64\ReleaseLibNchar\QIF_30_vc80LIBND.lib
C:\Program Files (x86)\CodeSynthesis XSD 3.3\lib64\vc-10.0\lib64\xerces-c_3D.lib
```

(Again, this assumes the QIF_30 folder is at the same folder level as your application folder.)