#ifndef __github_com_myun2__pargen__dummy_driver__dx9_HPP__
#define __github_com_myun2__pargen__dummy_driver__dx9_HPP__

//	Dummy Included
#define __github_com_myun2__pargen__directx__dx9__includes_HPP__



#include <windows.h>

#define D3D_SDK_VERSION	(9)

struct IDirect3DDevice9 {};

struct IDirect3D9 {
	UINT GetAdapterCount() const { return 1; }

	inline HRESULT CreateDevice(UINT Adapter,
		D3DDEVTYPE DeviceType,
		HWND hFocusWindow,
		DWORD BehaviorFlags,
		D3DPRESENT_PARAMETERS *pPresentationParameters,
		IDirect3DDevice9** ppReturnedDeviceInterface);
};

IDirect3D9* Direct3DCreate9(UINT SDKVersion) { return new IDirect3D9; };

/////////////////

HRESULT IDirect3D9::CreateDevice(UINT Adapter,
	D3DDEVTYPE DeviceType,
	HWND hFocusWindow,
	DWORD BehaviorFlags,
	D3DPRESENT_PARAMETERS *pPresentationParameters,
	IDirect3DDevice9** ppReturnedDeviceInterface
)
{
	return 1;
}

#endif//__github_com_myun2__pargen__dummy_driver__dx9_HPP__
