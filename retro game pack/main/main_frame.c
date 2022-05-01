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
	int* menuStatus = changeMenu(mainMenu, MAX_MAIN_MENU_INDEX);
	mainMenu = menuStatus[0];

	if (menuStatus[1] == ENTER)
		selectMainMenu(menuStatus[0]);
	else
		moveMenuPoint(START_MAIN_MENU_COORD_Y, menuStatus);
}

void selectMainMenu(MainMenu mainMenu)
{
	switch (mainMenu)
	{
	case TIC_TAC_TOE_MENU:
		printTicTacToeMenu();
		break;
	case EXIT:
		exit(0);
	}
}
