@echo off
echo Building Pokemon Automation (Debug)...
cd /d "%~dp0SerialPrograms"
call "C:\Program Files\Microsoft Visual Studio\2022\Enterprise\VC\Auxiliary\Build\vcvars64.bat"
cmake --preset Debug
if %errorlevel% neq 0 (
    echo Configuration failed!
    pause
    exit /b 1
)
cmake --build --preset Debug
if %errorlevel% neq 0 (
    echo Build failed!
    pause
    exit /b 1
)
echo Build completed successfully!
echo Executable: %~dp0build\Debug\SerialPrograms.exe
pause