#include "main_frame.h"

MainMenu mainMenu = 0;

void printMainFrameMenu()
{
	clearConsole();
	printWithColor(YELLOW, "MINI GAME\n\n");
	printWithColor(WHITE, "¢º TIC TAC TOE\n");
	printWithColor(WHITE, "¢¹ EXIT\n");
}

void changeMainMenu()
{
	int* returns = changeMenu(mainMenu, MAX_MAIN_MENU_INDEX);
	mainMenu = returns[0];
	moveMenuPoint(START_MAIN_MENU_COORD_Y, returns);
}