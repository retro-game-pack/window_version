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
	int returns[2] = { currnetMenuIndex, -1};

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
	else if ('\r' == key) {
		returns[1] = ENTER;
	}

	return returns;
}

void moveMenuPoint(int startY, int* menuStatus)
{
	ButtonStatus buttonStatus = menuStatus[1];

	if (buttonStatus == NONE || buttonStatus == ENTER) return;

	Coordinates coord = { 0, startY + menuStatus[0]};
	setCursor(coord);

	printf("¢º");

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
	printf("¢¹");
}

void setCursor(Coordinates coordinates) 
{
	COORD cursor;

	cursor.X = coordinates.x;
	cursor.Y = coordinates.y;

	SetConsoleCursorPosition(COUT, cursor);
}