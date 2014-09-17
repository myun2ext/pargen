#ifndef __github_com_myun2__pargen__window__window_proc_HPP__
#define __github_com_myun2__pargen__window__window_proc_HPP__

#include <windows.h>

namespace myun2
{
	namespace pargen
	{
		class window_proc
		{
		public:
			static LRESULT CALLBACK proc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
			{
				switch (uMsg)
				{
					case WM_DESTROY:
						::PostQuitMessage(0);
						return 0;
					default:
						break;
				}
				return ::DefWindowProc(hWnd, uMsg, wParam, lParam);
			}
		};
	}
}

#endif//__github_com_myun2__pargen__window__window_proc_HPP__
