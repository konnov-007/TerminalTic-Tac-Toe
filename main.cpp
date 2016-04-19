#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <Windows.h>

char stepSaver[3][3]={{1,2,3},{4,5,6},{7,8,9}};
char stepTemp[3][3]={0};
char symbol;

void title()
{
	printf("XXXXX  X  XXXXX     XXXXX    X    XXXXX     XXXXX    X    XXXXX\n");
	printf("  X       X     XXX   X    X   X  X     XXX   X    X   X  X\n");
	printf("  X    X  X     XXX   X    XXXXX  X     XXX   X    X   X  XXXXX\n");
	printf("  X    X  X           X    X   X  X           X    X   X  X\n");   
	printf("  X    X  XXXXX       X    X   X  XXXXX       X      X    XXXXX\n\n\n\n");
}



void firstStepChoose(bool *whoStartP)
{
	int tmp;
	srand(time(NULL));
	tmp=rand()%2;
	if(tmp==0) *whoStartP=false;
	if(tmp==1) *whoStartP=true;
}


void arrayOutput(int tmp){
int l=0, i, j;
if(tmp==1&&stepSaver[0][0]!='X'&&stepSaver[0][0]!='O'){
		for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		 if(i==0&&j==0){
	if (symbol=='X') stepSaver[i][j]='X';
	if (symbol=='O') stepSaver[i][j]='O';
	 printf("| %c ", stepSaver[i][j]); 
	stepTemp[i][j]='X';
	}
		else {
		    if(stepTemp[i][j]=='X') printf("| X ");
		else if(stepTemp[i][j]=='O') printf("| O ");
		else{
	stepSaver[i][j]=(49+l);
	printf("| %c ", stepSaver[i][j]);	
	}}
		l++;
	 } printf("|"); printf("\n");
	}l=0;
	 }

		if(tmp==2&&stepSaver[0][1]!='X'&&stepSaver[0][1]!='O'){
		for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		if(i==0&&j==1){
	if (symbol=='X') stepSaver[i][j]='X';
	if (symbol=='O') stepSaver[i][j]='O';
		printf("| %c ", stepSaver[i][j]); 
	stepTemp[i][j]='X';
	}
		else if(stepTemp[i][j]=='X') printf("| X ");
		else if(stepTemp[i][j]=='O') printf("| O ");
		else {
	stepSaver[i][j]=(49+l);
	printf("| %c ", stepSaver[i][j]);	
	}
		l++;
	}printf("|"); printf("\n"); 
	} l=0;
}
	 	if(tmp==3&&stepSaver[0][2]!='X'&&stepSaver[0][2]!='O'){
		for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		if(i==0&&j==2){
		if (symbol=='X') stepSaver[i][j]='X';
		if (symbol=='O') stepSaver[i][j]='O';
	printf("| %c ", stepSaver[i][j]); 
	stepTemp[i][j]='X';
	}		
		else if(stepTemp[i][j]=='X') printf("| X ");
		else if(stepTemp[i][j]=='O') printf("| O ");
		else {
	stepSaver[i][j]=(49+l);
	printf("| %c ", stepSaver[i][j]);	
	}
		l++;
	}printf("|"); printf("\n");
	}l=0;
	 }
	 
	 	if(tmp==4&&stepSaver[1][0]!='X'&&stepSaver[1][0]!='O'){
		for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		if(i==1&&j==0){
		if (symbol=='X') stepSaver[i][j]='X';
		if (symbol=='O') stepSaver[i][j]='O';
	printf("| %c ", stepSaver[i][j]); 
	stepTemp[i][j]='X';
	}
		else if(stepTemp[i][j]=='X') printf("| X ");
		else if(stepTemp[i][j]=='O') printf("| O ");
		else {
	stepSaver[i][j]=(49+l);
	printf("| %c ", stepSaver[i][j]);	
	}
		l++;
	}printf("|"); printf("\n"); 
	}l=0; 
	 }
	 
	 	if(tmp==5&&stepSaver[1][1]!='X'&&stepSaver[1][1]!='O'){
		for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		if(i==1&&j==1){
		if (symbol=='X') stepSaver[i][j]='X';
		if (symbol=='O') stepSaver[i][j]='O';
	printf("| %c ", stepSaver[i][j]); 
	stepTemp[i][j]='X';
	}
		else if(stepTemp[i][j]=='X') printf("| X ");
		else if(stepTemp[i][j]=='O') printf("| O ");
		else {
	stepSaver[i][j]=(49+l);
	printf("| %c ", stepSaver[i][j]);	
	}
		l++;
	}printf("|"); printf("\n");
	}l=0; 
	 }
	 
	 	if(tmp==6&&stepSaver[1][2]!='X'&&stepSaver[1][2]!='O'){
		for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		if(i==1&&j==2){
		if (symbol=='X') stepSaver[i][j]='X';
		if (symbol=='O') stepSaver[i][j]='O';
	printf("| %c ", stepSaver[i][j]); 
	stepTemp[i][j]='X';
	}
		else if(stepTemp[i][j]=='X') printf("| X ");
		else if(stepTemp[i][j]=='O') printf("| O ");
		else {
	stepSaver[i][j]=(49+l);
	printf("| %c ", stepSaver[i][j]);	
	}
		l++;
 }printf("|"); printf("\n");
	}l=0; 
	 }
	 
	 	if(tmp==7&&stepSaver[2][0]!='X'&&stepSaver[2][0]!='O'){
		for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		if(i==2&&j==0){
		if (symbol=='X') stepSaver[i][j]='X';
		if (symbol=='O') stepSaver[i][j]='O';
	printf("| %c ", stepSaver[i][j]); 
	stepTemp[i][j]='X';
	}
		else if(stepTemp[i][j]=='X') printf("| X ");
		else if(stepTemp[i][j]=='O') printf("| O ");
		else {
	stepSaver[i][j]=(49+l);
	printf("| %c ", stepSaver[i][j]);	
	}
		l++; 
	}
	printf("|"); printf("\n");
	}l=0;
	 }
	 
	 	if(tmp==8&&stepSaver[2][1]!='X'&&stepSaver[2][1]!='O'){
		for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		if(i==2&&j==1){
		if (symbol=='X') stepSaver[i][j]='X';
		if (symbol=='O') stepSaver[i][j]='O';
	printf("| %c ", stepSaver[i][j]); 
	stepTemp[i][j]='X';
	}
		else if(stepTemp[i][j]=='X') printf("| X ");
		else if(stepTemp[i][j]=='O') printf("| O ");
		else {
	stepSaver[i][j]=(49+l);
	printf("| %c ", stepSaver[i][j]);	
	}
		l++;
	}printf("|"); printf("\n");
	}l=0; 
	 }
	 
	 	if(tmp==9&&stepSaver[2][2]!='X'&&stepSaver[2][2]!='O'){
		for(i=0; i<3; i++){
	for(j=0; j<3; j++){
		if(i==2&&j==2){
		if (symbol=='X') stepSaver[i][j]='X';
		if (symbol=='O') stepSaver[i][j]='O';
	printf("| %c ", stepSaver[i][j]); 
	stepTemp[i][j]='X';
	}
		else if(stepTemp[i][j]=='X') printf("| X ");
		else if(stepTemp[i][j]=='O') printf("| O ");
		else {
	stepSaver[i][j]=(49+l);
	printf("| %c ", stepSaver[i][j]);	
	}
		l++;
	}printf("|"); printf("\n");
	}l=0; 
	 } 
}



void computerPlays(bool* whoStartP)
{		
int rnd;
if(*whoStartP==false){
symbol='X';
	printf("\n\nComputer's step \n");
	Sleep(1300); system("cls");
	rnd=rand()%9+1;
arrayOutput(rnd);	
}
}


void playerPlays(bool* whoStartP)
{
int select;
if(*whoStartP==false) do{
	symbol='O';
 printf("\n\nChoose number to put O: ");
 scanf("%d", &select);
 if(select<1||select>9) printf("\n\nSelect number from 1 to 9:\n\n");
}while(select<1||select>9);

if(*whoStartP==true) do{
	int l=0;
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		printf("| %c ", char(49+l));
	l++;}printf("|");printf("\n");	}
	symbol='X';
 printf("\n\nChoose number to put O: ");
 scanf("%d", &select);
 if(select<1||select>9) printf("\n\nSelect number from 1 to 9:\n\n");
}while(select<1||select>9);

 system("cls");
 arrayOutput(select);
	/*for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){				
	printf("| %c ", stepSaver[i][j]);
}	
	printf("|"); printf("\n");
	} */
}



void game(bool *isGameActiveP)
{
	system("cls");
	bool whoStart;
	firstStepChoose(&whoStart);

		if(whoStart==false) { computerPlays(&whoStart); playerPlays(&whoStart); }
	if(whoStart==true){	playerPlays(&whoStart); computerPlays(&whoStart); }	
	int l=0;
 for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
 stepSaver[i][j]=49+l;
 stepTemp[i][j]=0;
 l++;
}
}
printf("\n\nPress any key to return to main menu...");
getch();
		*isGameActiveP=true;
}




void instruction(bool *isGameActiveP)
{
	system("cls");
printf("Rules:\n\n");
printf("There are two players on 3x3 field.\n");
printf("Crosses go first.\n");
printf("Player wins if he makes up the right combination.\n");
printf("\nThis is the game field:\n");	
int l=0;
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		printf("| %c ", char(49+l));
		l++;
	}
	printf("|");
	printf("\n");
}
printf("\nTo win you should cross numbers diagonally, vertically or horizontally.");
printf("\n\nFor example, \"X\" player wins here:\n");
l=0;
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		if((i==0&&j==0)||(i==1&&j==1)||(i==2&&j==2)) printf("| X ");
		else printf("| %c ", char(49+l));
		l++;
	}
	printf("|");
	printf("\n");
}
		printf("\nIf you both can't cross entire field, game is draw.");
		
printf("\n\nPress any key to return to main menu...");
getch();
*isGameActiveP = true;
}




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
	    	game(isGameActiveP);
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



void mainGame()
{
	bool isGameActive;
	
	do{
	gameMenu(&isGameActive);
}while(isGameActive==true);
}



main()
{
mainGame();
	return 0;	
}
