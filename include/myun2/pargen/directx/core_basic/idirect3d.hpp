#define __github_com_myun2__pargen__directx__core_basic__idirect3d_HPP__
#define __github_com_myun2__pargen__directx__core_basic__idirect3d_HPP__

namespace myun2
{
	namespace pargen
	{
		namespace directx
		{
			namespace core
			{
				template <typename _Impl>
				class idirect3d
				{
				public:
					typedef _Impl::Device Device;
				protected:
					Device m_device;
				public:
					idirect3d() { create(); }

					void create()
					{
						m_device = _Impl::create();
					}
				};
			}
		}
	}
}

#endif//__github_com_myun2__pargen__directx__core_basic__idirect3d_HPP__
