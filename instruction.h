#include <stdio.h>
#include <conio.h>

void instruction(bool *isGameActiveP)
{
	system("cls");
	printf("Rules:\n\n");
	printf("There are two players on 3x3 field.\n");
	printf("Crosses go first.\n");
	printf("Player wins if he makes up the right combination.\n");
	printf("\nThis is the game field:\n");	
	int l=0;
	printf("\n\n");
    printf(" 1 | 2 | 3\n");
	printf("-----------\n");
    printf(" 4 | 5 | 6\n");
	printf("-----------\n");
    printf(" 7 | 8 | 9\n");

	printf("\nTo win you should cross numbers diagonally, vertically or horizontally.");
	printf("\n\nFor example, \"X\" player wins here:\n");
	l=0;
	printf("\n");
    printf(" X | 2 | 3\n");
	printf("-----------\n");
    printf(" 4 | X | 6\n");
	printf("-----------\n");
    printf(" 7 | 8 | X\n");

	printf("\nIf you both can't cross entire field, game is draw.");	
	printf("\n\nPress any key to return to main menu...");
	getch();
	*isGameActiveP = true;
}

