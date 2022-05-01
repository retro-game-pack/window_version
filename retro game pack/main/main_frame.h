#pragma once

#include <game_util.h>
#include <tic_tac_toe.h>

#define MAX_MAIN_MENU_INDEX 1
#define START_MAIN_MENU_COORD_Y 2

typedef enum _MainMenu
{
	TIC_TAC_TOE_MENU = 0,
	EXIT,
} MainMenu;

void printMainFrameMenu();
void changeMainMenu();
void selectMainMenu(MainMenu mainMenu);