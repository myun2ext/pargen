#ifndef __github_com_myun2__pargen__directx__core_dx8__d3d_HPP__
#define __github_com_myun2__pargen__directx__core_dx8__d3d_HPP__

#include "myun2/pargen/directx/dx8/includes.hpp"

namespace myun2
{
	namespace pargen
	{
		namespace directx
		{
			namespace core_dx8
			{
				struct d3d
				{
					typedef ::IDirect3D8* D3d;

					static D3d create() {
						return ::Direct3DCreate8(D3D_SDK_VERSION);
					}
				};
			}
		}
	}
}

#endif//__github_com_myun2__pargen__directx__core_dx8__d3d_HPP__
