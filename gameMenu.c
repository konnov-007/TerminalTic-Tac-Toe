#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include "mainGame.c"
#include "instruction.h"
#include "about.h"
#include "title.h"
#include "cursorHide.c"

void gameMenu(bool *isGameActiveP)
{	
	bool cursor = false;
	cursorHide(cursor);
	system("cls");
	title();
	printf("\t\t\tWelcome to \"Tic-Tac\" game\n");
	printf("\n\t\t\t\t1. Play\n"
	"\n\t\t\t\t2. Instruction\n"
	"\n\t\t\t\t3. About\n"
	"\n\t\t\t\t4. Quit\n");
	unsigned char inputChar = _getch();
	
	if((inputChar!='1')&&(inputChar!='2')&&(inputChar!='3')&&(inputChar!='4'))
		*isGameActiveP=true;
	
	switch (inputChar)
	{
		case '1':
		{
			system("cls");
			do{
				printf("\nSelect difficult:\n1)Easy\n2)Medium\n3)Hard\n4)Back to main munu\n");
				inputChar = _getch();
			}while((inputChar!='1')&&(inputChar!='2')&&(inputChar!='3')&&(inputChar!='4'));
			system("cls");
			if(inputChar == '4'){
				*isGameActiveP=true;
				break;
			}
			cursor = true;
			cursorHide(cursor);
			mainGame(isGameActiveP, &inputChar);
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
