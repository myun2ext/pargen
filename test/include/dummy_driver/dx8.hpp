#ifndef __github_com_myun2__pargen__dummy_driver__dx8_HPP__
#define __github_com_myun2__pargen__dummy_driver__dx8_HPP__

//	Dummy Included
#define __github_com_myun2__pargen__directx__dx8__includes_HPP__



#include <windows.h>

struct IDirect3D8 {};

IDirect3D8* Direct3DCreate8(UINT SDKVersion) { return new IDirect3D8; };





#endif//__github_com_myun2__pargen__dummy_driver__dx8_HPP__
