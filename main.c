#include <stdio.h>
#include <stdlib.h>
#include "gameMenu.c"

main()
{
	bool isGameActive;
	
	do{
		gameMenu(&isGameActive);
	}while(isGameActive==true);

	return 0;	
}
