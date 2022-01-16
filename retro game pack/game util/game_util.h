#pragma once

#include <Windows.h>

#define COUT GetStdHandle(STD_OUTPUT_HANDLE)

typedef enum {
	YELLOW = 6,
	WHITE = 7,
} Color;

void clearConsole();
void setTextColor(Color color);