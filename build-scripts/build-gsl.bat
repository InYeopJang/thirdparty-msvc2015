@setlocal enableextensions
::
:: Build script Gnu Scientific Libraries. It uses a the official
:: sources that have been supplemented by a cmake framework
:: at https://github.com/ampl/gsl
@echo Building GSL

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Setup environment. Important to ensure correct detection of environment
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
@call %~dp0cmds\common-setup.cmd
set CMAKE_DIR=%~dp0cmake

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Clone and checkout sha1
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
@set BUILD_DIR=%BUILD_ROOT%\gsl
@set REMOTE_URL=https://github.com/martyngigg/gnu-gsl-for-windows.git
@set SHA1=a1c0c258827eee5f4a8a5b527dca11fcf9cbe333
@set GSL_SRC_DIR=%BUILD_DIR%\gnu-gsl-for-windows

@call try-mkdir %BUILD_DIR%
@cd %BUILD_DIR%
if not exist %GSL_SRC_DIR% (
  echo Cloning from %REMOTE_URL%
  call git clone %REMOTE_URL% %GSL_SRC_DIR%
)
cd %GSL_SRC_DIR%
@call git checkout %SHA1%

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Build
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
@set VS_BUILD_DIR=%GSL_SRC_DIR%\build.vc14
@cd %VS_BUILD_DIR%

:: generate headers
if not exist %GSL_SRC_DIR%\gsl\gsl_version.h @msbuild /nologo /p:Configuration=Release /p:Platform=x64 %VS_BUILD_DIR%\gslhdrs\gslhdrs.vcxproj
@call:build-gsl Release
@call:build-gsl Debug

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Install
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
if not exist %INSTALL_PREFIX%\include\gsl mkdir %INSTALL_PREFIX%\include\gsl
xcopy /Y %GSL_SRC_DIR%\gsl\*.h %INSTALL_PREFIX%\include\gsl
@call:install-libs Release
@call:install-libs Debug

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Finalize
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
@call try-pause.cmd
goto:eof

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Functions
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: %1 Configuration to build: Release/Debug
:build-gsl
msbuild /nologo /p:Configuration=%1 /p:Platform=x64 %VS_BUILD_DIR%\cblasdll\cblasdll.vcxproj
msbuild /nologo /p:Configuration=%1 /p:Platform=x64 %VS_BUILD_DIR%\gsldll\gsldll.vcxproj
goto:eof

:: %1 Configuration to install
:install-libs
xcopy %VS_BUILD_DIR%\dll\x64\%1\*.lib %INSTALL_PREFIX%\lib /Y /I
xcopy %VS_BUILD_DIR%\dll\x64\%1\*.pdb %INSTALL_PREFIX%\bin /Y /I
xcopy %VS_BUILD_DIR%\dll\x64\%1\*.dll %INSTALL_PREFIX%\bin /Y /I
goto:eof