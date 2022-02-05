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

int* changeMenu(int currnetMenuIndex, int maxMenuIndex)
{
	int returns[2] = { currnetMenuIndex, 0};

	char key = getch();

	if (('w' == key || 'W' == key) && currnetMenuIndex > 0)
	{
		returns[0]--;
		returns[1] = UP;
	}
	else if (('s' == key || 'S' == key) && currnetMenuIndex < maxMenuIndex)
	{
		returns[0]++;
		returns[1] = DOWN;
	}

	return returns;
}

void moveMenuPoint(int startY, int currentIndex, ButtonStatus buttonStatus)
{
	Coordinates coord = { 0, startY + currentIndex };
	setCursor(coord);

	printf("��");

	switch (buttonStatus)
	{
	case UP:
		coord.y++;
		break;
	case DOWN:
		coord.y--;
		break;
	}

	setCursor(coord);
	printf("��");
}

void setCursor(Coordinates coordinates) 
{
	COORD cursor;

	cursor.X = coordinates.x;
	cursor.Y = coordinates.y;

	SetConsoleCursorPosition(COUT, cursor);
}