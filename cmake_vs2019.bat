@echo off
if exist build (
  rmdir /s /q build
)
mkdir build
cd build
cmake -G "Visual Studio 16 2019"  -A x64 ..
cmake --build .
