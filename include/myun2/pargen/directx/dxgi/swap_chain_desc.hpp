#ifndef __github_com_myun2__pargen__directx__dxgi__swap_chain_desc_HPP__
#define __github_com_myun2__pargen__directx__dxgi__swap_chain_desc_HPP__

#include "myun2/pargen/directx/dxgi/mode_desc.hpp"
#include "myun2/pargen/directx/dxgi/sample_desc.hpp"

namespace myun2
{
	namespace pargen
	{
		namespace directx
		{
			namespace dxgi
			{
				struct swap_chain_desc
				{
					mode_desc buffer_desc;
					sample_desc sample;
					DXGI_USAGE BufferUsage;
					UINT BufferCount;
					HWND OutputWindow;
					BOOL Windowed;
					DXGI_SWAP_EFFECT SwapEffect;
					UINT Flags;
					mode_desc mode;
				};
			}
		}
	}
}

/*
    DXGI_USAGE BufferUsage;
    UINT BufferCount;
    HWND OutputWindow;
    BOOL Windowed;
    DXGI_SWAP_EFFECT SwapEffect;
    UINT Flags;
} DXGI_SWAP_CHAIN_DESC;
*/

#endif//__github_com_myun2__pargen__directx__dxgi__swap_chain_desc_HPP__
