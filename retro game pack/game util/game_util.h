#pragma once

#include <Windows.h>
#include <stdio.h>
#include <stdarg.h>
#include <conio.h>

#define COUT GetStdHandle(STD_OUTPUT_HANDLE)

typedef enum _Color
{
	YELLOW = 6,
	WHITE = 7,
} Color;

typedef enum _ButtonStatus
{
	NONE = -1,
	UP,
	DOWN,
	ENTER,
} ButtonStatus;

typedef struct _Coordinates
{
	int x;
	int y;
} Coordinates;

void clearConsole();
void setTextColor(Color color);
void setCursor(Coordinates coordinates);
void printWithColor(Color color, char* msg, ...);
int* changeMenu(int menuManager, int maxMenuIndex);
void moveMenuPoint(int startY, int* menuStatus);