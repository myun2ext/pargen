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
				class d3d
				{
				public:
					typedef _Impl::D3d D3d;
				protected:
					D3d m_d3d;
				public:
					d3d() { create(); }

					void create()
					{
						m_d3d = _Impl::create();
					}
				};
			}
		}
	}
}

#endif//__github_com_myun2__pargen__directx__core_basic__idirect3d_HPP__
