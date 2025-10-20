@echo off
echo Cleaning build directories...
cd /d "%~dp0"
if exist "build\" (
    rmdir /s /q "build"
    echo Build directory cleaned.
) else (
    echo No build directory found.
)
pause