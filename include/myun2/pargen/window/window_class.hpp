#ifndef __github_com_myun2__pargen__window__window_class_HPP__
#define __github_com_myun2__pargen__window__window_class_HPP__

#include <windows.h>

namespace myun2
{
	namespace pargen
	{
		class window_class
		{
		public:
			typedef ::WNDCLASSEX _ImplType;
		protected:
			_ImplType wc;
		public:
			window_class(const char* name, WNDPROC window_proc)
			{
				ZeroMemory(&wc, sizeof(wc));
				wc.cbSize = sizeof(wc);
				wc.style         = CS_HREDRAW | CS_VREDRAW;
				wc.cbClsExtra    = 0;
				wc.cbWndExtra    = 0;
				wc.hInstance     = NULL;
				wc.hIcon         = LoadIcon(NULL, IDI_APPLICATION);
				wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
				wc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
				wc.lpszMenuName  = NULL;
				wc.hIconSm       = LoadIcon(NULL, IDI_APPLICATION);
				wc.lpszClassName = name;
				wc.lpfnWndProc = window_proc;
			}

			operator WNDCLASSEX& () { return wc; }
			operator const WNDCLASSEX& () const { return wc; }
			operator WNDCLASSEX* () { return &wc; }
			operator const WNDCLASSEX* () const { return &wc; }
			void register_class() const { ::RegisterClassEx(&wc); }
			void unregister(HINSTANCE h_instance) const { ::UnregisterClass(wc.lpszClassName, h_instance); }

			const char* get_class_name() const { return wc.lpszClassName; }
		};
	}
}

#endif//__github_com_myun2__pargen__window__window_class_HPP__
