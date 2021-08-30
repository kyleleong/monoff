#include <Windows.h>

int WINAPI WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow
)
{
	(void) hPrevInstance;
	(void) lpCmdLine;
	(void) nCmdShow;
	
	HWND hWnd;
	WNDCLASS wc = { 0 };

	wc.lpszClassName = "MonOff";
	wc.hInstance = hInstance;
	wc.lpfnWndProc = DefWindowProc;

	RegisterClass(&wc);
	
	hWnd = CreateWindow(
		wc.lpszClassName,
		NULL,
		0,
		0,
		0,
		0,
		0,
		NULL,
		NULL,
		hInstance,
		NULL
	);

	SendMessage(hWnd, WM_SYSCOMMAND, SC_MONITORPOWER, 2);

	return 0;
}
