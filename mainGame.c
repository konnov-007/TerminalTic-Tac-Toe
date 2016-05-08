#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>

char field[3][3] = 
    {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };
int go = 0;


void hardDifficult(){
	int temp=0;
	if(field[0][0]=='1' && field[0][1] == '2' && field[0][2] == '3'&&field[1][0]=='4' && field[1][1] == 'X' 
	&& field[1][2] == '6' && field[2][0] == '7'&& field[2][1] == '8'&& field[2][2] == '9'){
		temp = rand()%4+1;
			if(temp == 1) go = 1;
			if(temp == 2)  go = 3;
			if(temp == 3) go = 7;
			if(temp == 4) go = 9;
	}
}



void mainGame(bool *isGameActiveP, char *inputCharP)
{
	system("cls");
	srand(time(NULL));
	int i = 0, j=0;
	int player = 0;
	int row = 0; 
	int column = 0;
	int line = 0;
	int winner = 0;
	char message1[]="\nPlease input the number of the square where you want to place your: ";
	char message2[]="\nComputer went to: ";

	for( i = 0; i<9 && winner==0; i++){
	
    	printf("\n\n");
    	printf(" %c | %c | %c\n", field[0][0], field[0][1], field[0][2]);
		printf("-----------\n");
    	printf(" %c | %c | %c\n", field[1][0], field[1][1], field[1][2]);
		printf("-----------\n");
    	printf(" %c | %c | %c\n", field[2][0], field[2][1], field[2][2]);
        
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
            
			if(player==2 && go>=0 && go<=9&&(field[row][column]!='X'&&field[row][column]!='O')){
				Sleep(300);
				printf("\n%s %d", message2, go+1);
				Sleep(300);
			}
		}while(go<0 || go>=9 || field[row][column]=='X'||field[row][column]=='O');
        
    field[row][column] = (player == 1) ? 'X' : 'O'; //put X or O to selected position
        
	if((field[0][0] == field[1][1] && field[0][0] == field[2][2]) ||
    (field[0][2] == field[1][1] && field[0][2] == field[2][0]))
   		winner = player;
	else            
		for(line = 0; line <= 2; line ++)     
			if((field[line][0] == field[line][1] && field[line][0] == field[line][2])||
			(field[0][line] == field[1][line] && field[0][line] == field[2][line]))
				winner = player;
	}
	printf("\n\n");
    printf(" %c | %c | %c\n", field[0][0], field[0][1], field[0][2]);
	printf("-----------\n");
    printf(" %c | %c | %c\n", field[1][0], field[1][1], field[1][2]);
	printf("-----------\n");
    printf(" %c | %c | %c\n", field[2][0], field[2][1], field[2][2]);
    
	if(winner == 0)
    	printf("\nDraw\n");
	else{
		if(winner==1) 
			printf("\nYou won!");
		if(winner==2) 
			printf("\nComputer won!");
	}
	
	//return source matrix
	line = 49;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			field[i][j]=line;
			line++;
		}
	}
	go=0;
	printf("\n\nPress any key to return to main menu...");
	getch();
	*isGameActiveP=true;
}
