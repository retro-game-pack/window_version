#include "game_util.h"

void clearConsole() {
	system("cls");
}

void setTextColor(Color color)
{
	SetConsoleTextAttribute(COUT, color);
}
