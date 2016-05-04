#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include "mainGame.c"
#include "instruction.h"
#include "about.h"
#include "title.h"

void gameMenu(bool *isGameActiveP)
{	
	system("cls");
	title();
	printf("Welcome to \"Tic-Tac\" game.\n\n");
	printf("1)Play\n2)Instruction\n3)About\n4)Quit\n");
	unsigned char inputChar = _getch();
	
	if((inputChar!='1')&&(inputChar!='2')&&(inputChar!='3')&&(inputChar!='4'))
		*isGameActiveP=true;
	
	switch (inputChar)
	{
		case '1':
		{
	    	mainGame(isGameActiveP);
			break;
		}
	    
		case '2':
		{
			instruction(isGameActiveP);
			break;
		}

		case '3':
		{
			about(isGameActiveP);
			break;	
		}
		
		case '4':
		{
	    	*isGameActiveP=false;
			break;
		}   
	}
}
