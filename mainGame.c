#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>

char board[3][3] = 
    {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };



void hardDifficult(){
	int i, j;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++)
		printf("%c", board[i][j]);
	printf("\n");
	}
}


void mainGame(bool *isGameActiveP, char *inputCharP)
{
	system("cls");
	srand(time(NULL));
	int i = 0, j=0;
	int player = 0;
	int go = 0;
	int row = 0; 
	int column = 0;
	int line = 0;
	int winner = 0;
	char message1[]="\nPlease input the number of the square where you want to place your: ";
	char message2[]="\nComputer went to: ";

	for( i = 0; i<9 && winner==0; i++){
	
    	printf("\n\n");
    	printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
		printf("-----------\n");
    	printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
		printf("-----------\n");
    	printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
        
		player = i%2 + 1; 

 		do{
 			
			if(player==1) {
				printf("%s %c: ", message1,(player==1)?'X':'O');
	
				int tempValue=0;

				while(tempValue==0){
					char inputChar[1000]={'\0'};
					scanf("%s", &inputChar); 
					tempValue=atoi(inputChar); 
					if(tempValue!=0)
						go=atoi(inputChar); 
					else 
						printf("%s %c: ", message1,(player==1)?'X':'O');
				}	
			}


			if(player==2){
				if(*inputCharP=='1')	
					go=rand()%9+1;
				if(*inputCharP=='2')
					hardDifficult();
    		}
    		
			row = --go/3;
    		column = go%3;
            
			if(player==2 && go>=0 && go<=9&&(board[row][column]!='X'&&board[row][column]!='O')){
				Sleep(300);
				printf("\n%s %d", message2, go+1);
				Sleep(300);
			}
		}while(go<0 || go>=9 || board[row][column]=='X'||board[row][column]=='O');
        
    board[row][column] = (player == 1) ? 'X' : 'O'; //put X or O to selected position
        
	if((board[0][0] == board[1][1] && board[0][0] == board[2][2]) ||
    (board[0][2] == board[1][1] && board[0][2] == board[2][0]))
   		winner = player;
	else            
		for(line = 0; line <= 2; line ++)     
			if((board[line][0] == board[line][1] && board[line][0] == board[line][2])||
			(board[0][line] == board[1][line] && board[0][line] == board[2][line]))
				winner = player;
	}
	printf("\n\n");
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
	printf("-----------\n");
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
	printf("-----------\n");
    printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
    
	if(winner == 0)
    	printf("\nDraw\n");
	else{
		if(winner==1) 
			printf("\nYou won!");
		if(winner==2) 
			printf("\nComputer won!");
	}
	
	//return source board
	line = 49;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			board[i][j]=line;
			line++;
		}
	}
	
	printf("\n\nPress any key to return to main menu...");
	getch();
	*isGameActiveP=true;
}
