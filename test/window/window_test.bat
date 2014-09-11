@echo off
set CC=g++
set INCLUDES=../../include
set LINKS= -lgdi32
set CFLAGS=-O3
set SOURCES=window_test.cpp
set OUTFILE=window_test.exe

@echo on
%CC% -I %INCLUDES% %CFLAGS% %SOURCES% %LINKS% -o %OUTFILE%

%OUTFILE%

@pause