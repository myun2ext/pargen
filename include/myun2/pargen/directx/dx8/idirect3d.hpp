#ifndef __SFJP_ROAST_EX__graphics__directx__dx8__dx_HPP__
#define __SFJP_ROAST_EX__graphics__directx__dx8__dx_HPP__



namespace myun2
{
	namespace pargen
	{
		namespace directx
		{
			namespace core_dx8
			{
				struct idirect3d
				{
					typedef ::IDirect3D8* Device;

					static Device create()
					{
						return ::Direct3DCreate8(D3D_SDK_VERSION);
					}
				};
			}
		}
	}
}

#endif//__SFJP_ROAST_EX__graphics__directx__dx8__dx_HPP__
