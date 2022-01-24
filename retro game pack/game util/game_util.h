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

void clearConsole();
void setTextColor(Color color);
void printWithColor(Color color, char* msg, ...);
int changeMenu(int currnetMenuIndex, int maxMenuIndex);