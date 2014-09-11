#include "myun2/pargen/window.hpp"

using namespace myun2::pargen;

LRESULT CALLBACK window_proc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
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


int main(int argc , char ** argv)
{
	window_class wc("Pargen_WindowTest_WindowClass", window_proc);
	window win(wc, "Test", 640, 480);

	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return 0;
}