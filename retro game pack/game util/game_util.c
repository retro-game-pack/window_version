#include "game_util.h"

void clearConsole() 
{
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

int changeMenu(int currnetMenuIndex, int maxMenuIndex)
{
	char key = getch();

	if (('w' == key || 'W' == key) && currnetMenuIndex > 0)
	{
		currnetMenuIndex--;
	}
	else if (('s' == key || 'S' == key) && currnetMenuIndex < maxMenuIndex)
	{
		currnetMenuIndex++;
	}

	return currnetMenuIndex;
}