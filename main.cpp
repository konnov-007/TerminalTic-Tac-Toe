#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
char table[3][3];


void title()
{
	printf("XXXXX  X  XXXXX     XXXXX    X    XXXXX     XXXXX    X    XXXXX\n");
	printf("  X       X     XXX   X    X   X  X     XXX   X    X   X  X    \n");
	printf("  X    X  X     XXX   X    XXXXX  X     XXX   X    X   X  X    \n");
	printf("  X    X  XXXXX       X    X   X  XXXXX       X      X    XXXXX\n\n\n\n");   
}


void instruction()
{
	system("cls");
printf("Rules:\n");
printf("There are two players on 3x3 field. \nPlayer wins if he makes up the right combination.\n");
printf("\nGame field:\n");	
int l=0;

for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		printf("| %c ", char(49+l));
		l++;
	}
	printf("|");
	printf("\n");
}
	
	
}
/*
void input()
{
	
}
void gameField()
{
	

*/
void gameMenu()
{	
	printf("Welcome to \"Tic-Tac\" game.\n\n");
	printf("1)Play\n2)Instruction\n3)Quit\n");
	unsigned char inputChar = _getch();
	
	switch (inputChar)
	{
		
	    case '1':
	    {
		    break;
	    }
	    
	    case '2':
	    {
		    instruction();
		    break;
	    }

	    case '3':
	    {
		    break;
	    }
}
}


main()
{
	title();
	gameMenu();
	//gameField();
	return 0;	
}
