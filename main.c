#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>
#include "gameMenu.c"

main()
{
	bool isGameActive;
	
do{
	gameMenu(&isGameActive);
}while(isGameActive==true);

	return 0;	
}
