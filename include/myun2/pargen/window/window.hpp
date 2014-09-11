#ifndef __github_com_myun2__pargen__window__window_HPP__
#define __github_com_myun2__pargen__window__window_HPP__

#include <windows.h>
#include "myun2/pargen/window/window_class.hpp"

namespace myun2
{
	namespace pargen
	{
		class window
		{
		private:
			HWND hWnd;
		public:
			window(
				const window_class& wc,
				const char* window_title,
				unsigned int width, unsigned int height,
				unsigned int x=0, unsigned int y=0, bool immediately_show=true)
			{
				wc.register_class();

				hWnd = ::CreateWindowEx(
					WS_EX_APPWINDOW,
					wc.get_class_name(),
					window_title,
					WS_OVERLAPPEDWINDOW,
					x, y,
					width, height,
					NULL,
					NULL,
					NULL,
					NULL);

				if (immediately_show)
					show();
			}
			HWND get_window_handle() const { return hWnd; }
			void show() {
				ShowWindow(hWnd, SW_SHOWDEFAULT);
				UpdateWindow(hWnd);
			}
		};
	}
}

#endif//__github_com_myun2__pargen__window__window_HPP__
