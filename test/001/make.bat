@echo off
set CC=mingw32-c++
set INCLUDES=../../include
set CFLAGS=-O3
set SOURCES=001.cpp
set OUTFILE=001.exe

@echo on
%CC% -I %INCLUDES% %CFLAGS% %SOURCES% -o %OUTFILE%

%OUTFILE%

@pause