@setlocal enableextensions
::
:: Build script yaml-cpp
@echo Building yaml-cpp

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Setup environment. Important to ensure correct detection of environment
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
@call %~dp0cmds\common-setup.cmd
@set YAMLCPP_EXTRAS_DIR=%~dp0extras\yaml-cpp

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Download and unpack source.
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
@set SRC_PKG_URL="https://github.com/jbeder/yaml-cpp/archive/yaml-cpp-0.5.3.zip"
@set BUILD_DIR=%BUILD_ROOT%\yaml-cpp
@set SRC_PKG=yaml-cpp-yaml-cpp-0.5.3.zip
@set SRC_ROOT=%BUILD_DIR%\yaml-cpp-yaml-cpp-0.5.3
@if not exist %SRC_ROOT% call download-and-extract.cmd %BUILD_DIR%\%SRC_PKG% %SRC_PKG_URL%

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Patch
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
cd %SRC_ROOT%
@call patch -p0 --input=%YAMLCPP_EXTRAS_DIR%\CMakeLists.txt.patch --backup

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Build
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
@call cmake-build-and-install %SRC_ROOT%\ %YAMLCPP_EXTRAS_DIR%\yaml-cpp.cmake %INSTALL_ROOT% ALL_BUILD.vcxproj

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Finalize
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
@call try-pause.cmd
goto:eof
