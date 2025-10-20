@echo off
echo Building Pokemon Automation (Release)...
cd /d "%~dp0SerialPrograms"
call "C:\Program Files\Microsoft Visual Studio\2022\Enterprise\VC\Auxiliary\Build\vcvars64.bat"
cmake --preset Release
if %errorlevel% neq 0 (
    echo Configuration failed!
    pause
    exit /b 1
)
cmake --build --preset Release
if %errorlevel% neq 0 (
    echo Build failed!
    pause
    exit /b 1
)
echo Build completed successfully!
echo Executable: %~dp0build\Release\SerialPrograms.exe
pause