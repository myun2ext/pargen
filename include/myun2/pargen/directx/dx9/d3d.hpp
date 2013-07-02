#ifndef __SFJP_ROAST_EX__graphics__directx__core_dx9__d3d_HPP__
#define __SFJP_ROAST_EX__graphics__directx__core_dx9__d3d_HPP__



namespace myun2
{
	namespace pargen
	{
		namespace directx
		{
			namespace core_dx9
			{
				struct d3d
				{
					typedef ::IDirect3D9* D3d;

					static D3d create()
					{
						return ::Direct3DCreate9(D3D_SDK_VERSION);
					}
				};
			}
		}
	}
}

#endif//__SFJP_ROAST_EX__graphics__directx__core_dx9__d3d_HPP__
