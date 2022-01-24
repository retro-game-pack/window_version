#pragma once

#include <Windows.h>
#include <stdio.h>
#include <stdarg.h>
#include <conio.h>

#define COUT GetStdHandle(STD_OUTPUT_HANDLE)

typedef enum 
{
	YELLOW = 6,
	WHITE = 7,
} Color;

typedef struct _Coordinates
{
	int x;
	int y;
} Coordinates;

void clearConsole();
void setTextColor(Color color);
void setCursor(Coordinates coordinates);
void printWithColor(Color color, char* msg, ...);
int changeMenu(int currnetMenuIndex, int maxMenuIndex);