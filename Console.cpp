#include "Console.h"

//di den diem (x,y)
void GotoXY(int pX, int pY)
{
	COORD coord;
	coord.X = pX;
	coord.Y = pY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void FixConsoleWindow()
{
	HWND consoleWindow = GetConsoleWindow();
	LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
	style = style & ~(WS_MAXIMIZEBOX)& ~(WS_THICKFRAME);
	SetWindowLong(consoleWindow, GWL_STYLE, style);
}

//doi mau chu
void Color(int n)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
}

//resize kich thuoc console
void resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}
