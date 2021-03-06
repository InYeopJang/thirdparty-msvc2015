@setlocal enableextensions
::
:: Download Python and set up the bundle.
:: Patches are applied to fix several issues
::
@echo Setting up bundled Python distribution

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Setup environment. Important to ensure correct detection of environment
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
@call %~dp0cmds\common-setup.cmd

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Download msi and unpack
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
@set SRC_PKG=python-2.7.10.amd64.msi
@set SRC_PKG_URL=https://www.python.org/ftp/python/2.7.10/%SRC_PKG%
@set BUILD_DIR=%BUILD_ROOT%\python

@call try-mkdir.cmd %BUILD_DIR%
@cd %BUILD_DIR%
@call download-file.cmd %BUILD_DIR%\%SRC_PKG% %SRC_PKG_URL%

if not exist %PYTHON_INSTALL_PREFIX% (
  @echo Extracting Python bundle to %PYTHON_INSTALL_PREFIX%
  msiexec /a %BUILD_DIR%\%SRC_PKG% /q TARGETDIR=%PYTHON_INSTALL_PREFIX%
  :: delete the msi that is also extracted
  del /Q %PYTHON_INSTALL_PREFIX%\%SRC_PKG%
)

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Patches
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
set PYTHON_EXTRAS_DIR=%~dp0\extras\python
@echo Patching uuid.py
@call:try-patch %PYTHON_INSTALL_PREFIX%\Lib %PYTHON_INSTALL_PREFIX%\Lib\uuid.py %PYTHON_EXTRAS_DIR%\uuid-nt.patch

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: setuptools + site packages
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
set PYTHON_SCRIPTS_DIR=%PYTHON_INSTALL_PREFIX%\Scripts
set PYTHON_EXE=%PYTHON_INSTALL_PREFIX%\python.exe
@echo Installing pip
if not exist %PYTHON_INSTALL_PREFIX%\Lib\site-packages\pip (
  call download-file.cmd %BUILD_DIR%\get-pip.py https://bootstrap.pypa.io/get-pip.py
  %PYTHON_EXE% %BUILD_DIR%\get-pip.py
)

:: replace the .exe launchers with relocatable files
set WRITE_LAUNCHER=%PYTHON_EXTRAS_DIR%\write-launcher-script.py
set PYTHON_SITE_PACKAGES=%PYTHON_INSTALL_PREFIX%\Lib\site-packages
%PYTHON_EXE% %WRITE_LAUNCHER% --rm_exe %PYTHON_SITE_PACKAGES%\pip-7.1.2.dist-info\entry_points.txt
:: We don't want some of the entry points for Python 3
%PYTHON_EXE% %WRITE_LAUNCHER% --rm_exe %PYTHON_SITE_PACKAGES%\setuptools-18.4.dist-info\entry_points.txt
%PYTHON_EXE% %WRITE_LAUNCHER% --rm_exe %PYTHON_SITE_PACKAGES%\wheel-0.26.0.dist-info\entry_points.txt
echo Removing unneeded entry points
del %PYTHON_SCRIPTS_DIR%\pip3 %PYTHON_SCRIPTS_DIR%\pip3.cmd %PYTHON_SCRIPTS_DIR%\pip3.4 %PYTHON_SCRIPTS_DIR%\easy_install-3.5 %PYTHON_SCRIPTS_DIR%\easy_install-3.cmd

:: site-packages
@echo Installing site-packages
@call %~dp0\python-site-packages\fetch-all.cmd

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Finalize
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
@call try-pause.cmd
goto:eof

::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Functions
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
:: Patch a file if it has not been patched already
:: %1 Directory of file to patch
:: %2 File to be patched
:: %3 Patch file
:try-patch
if not exist %2.orig (
  patch -b --directory=%1  -i %3
)
goto:eof

:: Write a launcher script for a Python script. By default setuptools writes
:: a .exe file that is hardwired for the path on the machine it was installed
:: on so is not relocatable
:: %1 Path to the py(a) file that needs to be launched
:: %2 Path to write the launcher file
:write-python-launcher
@setlocal
@set _pya_file=%~nx1
@set _exec_file=%2
@echo @echo off> %_exec_file%
@echo setlocal enableextensions>> %_exec_file%
@echo :: easy_install launcher script. Uses a relative path to the Python>> %_exec_file%
@echo :: executable to ensure it is relocatable>> %_exec_file%
@echo set _scripts_dir=%%~dp0>> %_exec_file%
@echo %%_scripts_dir%%\..\python.exe %%_scripts_dir%%%_pya_file% %%*>> %_exec_file%
@endlocal
@goto:eof