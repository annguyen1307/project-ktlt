#pragma once
#include "iostream"
#include "windows.h"
#include "Console.h"

#define MAX_CAR 17
#define MAX_CAR_LENGTH 40
#define MAX_SPEED 3

//Biến toàn cục
POINT** X; //Mảng chứa MAX_CAR xe
POINT Y; // Đại diện người qua đường
int cnt = 0;//Biến hỗ trợ trong quá trình tăng tốc độ xe di chuyển
int MOVING;//Biến xác định hướng di chuyển của người
int SPEED;// Tốc độ xe chạy (xem như level)
int HEIGH_CONSOLE, WIDTH_CONSOLE;// Độ rộng và độ cao của màn hình console
bool STATE; // Trạng thái sống/chết của người qua đường


void ResetData();
void DrawBoard(int x, int y, int width, int height, int curPosX = 0, int curPosY = 0);
void StartGame();
void GabageCollect();
void ExitGame(HANDLE t);
void PauseGame(HANDLE t);
void ProcessDead();
void ProcessFinish(POINT& p);
void DrawCars(char* s);
void DrawSticker(const POINT& p, char* s);
bool IsImpact(const POINT& p, int d);
void MoveCars();
void EraseCars();
void MoveRight();
void MoveLeft();
void MoveDown();
void MoveUp();
void SubThread();
