#ifndef __github_com_myun2__pargen__directx__dx9__device_HPP__
#define __github_com_myun2__pargen__directx__dx9__device_HPP__

#include "myun2/pargen/directx/dx9/includes.hpp"

namespace myun2
{
	namespace pargen
	{
		namespace dx9
		{
			class device
			{
			public:
				typedef ::IDirect3D9 *d3d_type, *d3d_t;
				typedef ::IDirect3DDevice9 *device_type, *device_t;

			protected:
				d3d_type 	d3d;
				device_type	ptr;

			public:
				device(d3d_type d3d_in): d3d(d3d_in) {}
				device(d3d_type d3d_in, HWND hWnd, UINT width, UINT height, bool is_window=false) : d3d(d3d_in)
				{
					start(hWnd, width, height, is_window);
				}
				device_t start(HWND hWnd, UINT width, UINT height, bool is_window=false)
				{
					D3DPRESENT_PARAMETERS d3dParams =
					{
						width, height,
						D3DFMT_UNKNOWN,
						0,
						D3DMULTISAMPLE_NONE,
						0,
						D3DSWAPEFFECT_DISCARD,
						NULL,
						is_window,
						TRUE,
						D3DFMT_D24S8,
						0,
						0
					};
					if( FAILED( d3d->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hWnd, D3DCREATE_HARDWARE_VERTEXPROCESSING, &d3dParams, &ptr ) ) )
					if( FAILED( d3d->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hWnd, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dParams, &ptr ) ) )
					if( FAILED( d3d->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_REF, hWnd, D3DCREATE_HARDWARE_VERTEXPROCESSING, &d3dParams, &ptr ) ) )
					if( FAILED( d3d->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_REF, hWnd, D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dParams, &ptr ) ) )
					{
						ptr->Release();
						return NULL;
					}
					return ptr;
				}
			};
		}
	}
}

#endif//__github_com_myun2__pargen__directx__dx9__device_HPP__
