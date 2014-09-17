#include "myun2/pargen/window.hpp"
#include "myun2/pargen/dx9.hpp"

using namespace myun2::pargen;
using namespace myun2::pargen::dx9;

int main(int argc , char ** argv)
{
	window_class wc("Pargen_WindowTest_WindowClass", window_proc::proc);
	window win(wc, "Test", 640, 480);

	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	return 0;
}