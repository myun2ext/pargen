@echo off
set CC=mingw32-c++
set INCLUDES=../../include -I ../include
set CFLAGS=-O3
set SOURCES=001_dx9.cpp
set OUTFILE=001_dx9.exe

@echo on
%CC% -I %INCLUDES% %CFLAGS% %SOURCES% -o %OUTFILE%

%OUTFILE%

@pause