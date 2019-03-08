#include <iostream>
#include "Game.h"
#include "Console.h"
#include <conio.h>
#include <time.h>

void main()
{
	int temp;
	FixConsoleWindow();
	srand(time(NULL));
	StartGame();
	thread t1(SubThread);
	while (1)
	{
		temp = toupper(getch());
		if (STATE == 1)
		{
			if (temp == 27) 
			{
				ExitGame(t1.native_handle());
				return;
			}
			else if (temp == 'P') 
			{
				PauseGame(t1.native_handle());
			}
			else 
			{
				ResumeThread((HANDLE)t1.native_handle());
				if (temp == 'D' || temp == 'A' || temp == 'W' || temp == 'S')
				{
					MOVING = temp;
				}
			}
		}
		else
		{
			if (temp == 'Y') StartGame();
			else 
			{
				ExitGame(t1.native_handle());
				return;

			}
		}
	}
}