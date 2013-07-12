@echo off
set CC=mingw32-c++
set INCLUDES=../../include -I C:\Applications\glut-3.5\include
set LINKS=-L C:\Applications\glutdlls -lglut  -lopengl32 -lglu32 -lgdi32
set CFLAGS=-O3
set SOURCES=001.cpp
set OUTFILE=001.exe

@echo on
%CC% -I %INCLUDES% %CFLAGS% %SOURCES% %LINKS% -o %OUTFILE%

%OUTFILE%

@pause