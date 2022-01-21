#include "game_util.h"

void clearConsole() {
	system("cls");
}

void setTextColor(Color color)
{
	SetConsoleTextAttribute(COUT, color);
}

void printWithColor(Color color, char* msg, ...)
{
	va_list ap;

	setTextColor(color);
	va_start(ap, msg);
	vprintf(msg, ap);
	va_end(ap);
}