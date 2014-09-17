#ifndef __github_com_myun2__pargen__directx__dx9__d3d_HPP__
#define __github_com_myun2__pargen__directx__dx9__d3d_HPP__

#include "myun2/pargen/directx/dx9/includes.hpp"

namespace myun2
{
	namespace pargen
	{
		namespace directx
		{
			namespace dx9
			{
				struct d3d
				{
					typedef ::IDirect3D9* D3d;

					static D3d create() {
						return ::Direct3DCreate9(D3D_SDK_VERSION);
					}
				};
			}
		}
	}
}

#endif//__github_com_myun2__pargen__directx__dx9__d3d_HPP__
