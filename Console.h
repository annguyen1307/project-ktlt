#pragma once
#include "iostream"
#include "windows.h"

using namespace std;

void FixConsoleWindow();
void GotoXY(int, int);
void Color(int n);
void resizeConsole(int, int);