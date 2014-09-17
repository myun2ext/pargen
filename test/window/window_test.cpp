#include "myun2/pargen/window.hpp"

using namespace myun2::pargen;

int main(int argc , char ** argv)
{
	window_class wc("Pargen_WindowTest_WindowClass", window_proc::proc);
	window win(wc, "Test", 640, 480);
	win.message_loop();
	return 0;
}