#include <stdio.h>
#include <conio.h>

void about(bool *isGameActiveP)
{
	system("cls");
	printf("The game was developed for programming coursework.\n");
	printf("\nCreated by Ilya Konnov.\n");
	printf("For more information check out my github profile: \nhttps://github.com/konnov-007");	
	printf("\n\nPress any key to return to main menu...");
	getch();
	*isGameActiveP = true;	
}

