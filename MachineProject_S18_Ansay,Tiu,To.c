//DISCTRU

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>


void fscrn()
{
	//full screen mode
	keybd_event(VK_MENU,0x38,0,0);
	keybd_event(VK_RETURN,0x1c,0,0);
	keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
	keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}

void battleshirls()
{
		printf("\t\t\t\t\t\t ,ggggggggggg,                                                ,gg,                                      \n");          
		printf("\t\t\t\t\t\tdP\"\"\"88\"\"\"\"\"\"Y8,              I8    I8   ,dPYb,              i8\"\"8i   ,dPYb,                      ,dPYb,          \n");
		printf("\t\t\t\t\t\tYb,  88      `8b              I8    I8   IP'`Yb              `8,,8'   IP'`Yb                      IP'`Yb          \n");
		printf("\t\t\t\t\t\t`\"  88      ,8P             888888888888 I8  8I               `88'    I8  8I      gg              I8  8I          \n");
		printf("\t\t\t\t\t\t     88aaaad8P\"               I8    I8   I8  8'               dP\"8,   I8  8'      \"\"              I8  8'          \n");
		printf("\t\t\t\t\t\t     88\"\"\"\"Y8ba    ,gggg,gg   I8    I8   I8 dP   ,ggg,       dP' `8a  I8 dPgg,    gg    ,gggggg,  I8 dP    ,g,    \n");
		printf("\t\t\t\t\t\t     88      `8b  dP\"  \"Y8I   I8    I8   I8dP   i8\" \"8i     dP'   `Yb I8dP\" \"8I   88    dP\"\"\"\"8I  I8dP    ,8'8,  \n"); 
		printf("\t\t\t\t\t\t     88      ,8P i8'    ,8I  ,I8,  ,I8,  I8P    I8, ,8I _ ,dP'     I8 I8P    I8   88   ,8'    8I  I8P    ,8'  Yb  \n");
		printf("\t\t\t\t\t\t     88_____,d8',d8,   ,d8b,,d88b,,d88b,,d8b,_  `YbadP' \"888,,____,dP,d8     I8,_,88,_,dP     Y8,,d8b,_ ,8'_   8) \n");
		printf("\t\t\t\t\t\t    88888888P\"  P\"Y8888P\"`Y88P\"\"Y88P\"\"Y88P'\"Y88888P\"Y888a8P\"Y88888P\" 88P     `Y88P\"\"Y88P      `Y88P'\"Y88P' \"YY8P8P\n\n\n\n");
}

void ships(char name1[20], char name2[20])
{
printf("\n\n\n\n\n\n\t                               # #  ( )                                                                                                                       # #  ( )\n");
printf("\t                            ___# #___|__                                                                                                                   ___#_#___|__\n");
printf("\t                        _  |____________|  _   %-20s                                                             %20s   _  |____________|  _\n", name1,name2);
printf("\t                 _=====| | |            | | |==== _                                                                                             _=====| | |            | | |==== _\n");
printf("\t           =====| |.---------------------------. | |====                                                                                  =====| |.---------------------------. | |====\n");
printf("\t    \\--------------'   .  .  .  .  .  .  .  .   '-------------------->                                                      <--------------------'   .  .  .  .  .  .  .  .   '--------------/\n");
printf("\t     \\                                                             /                                                          \\                                                             /\n");
printf("\t      \\_________ALPHA_____________________________________________/                                                            \\_______________________________________________BETA________/\n");
printf("\t  wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwWwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwW  \n");
printf("\twwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwWwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwWwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
printf("\t   wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwWWwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwWwwwwwwwwwwwwwwwwwwwwwWWWWwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww   \n");

return;
}

void alphaw(char alphan[20])
{
	printf("\n\n\n\n\n\n\t                               # #  ( )                                                                                                                       \n");
printf("\t                            ___# #___|__                                                                                                                   \n");
printf("\t                        _ |____________| _                                                                                                          \n");
printf("\t                 _=====| | |            | | |==== _                                                                                                         # #  ( ) \n");
printf("\t           =====| |.---------------------------. | |====                                                                                                 ___#_#___|__\n");
printf("\t    \\--------------'   .  .  .  .  .  .  .  .   '-------------------->       %20s WINS!                                               _  |____________|  _ \n", alphan);
printf("\t     \\                                                             /                                                                          _=====| | |            | | |==== _\n");
printf("\t      \\_________ALPHA_____________________________________________/                                                                     =====| |.---------------------------. | |====\n");
printf("\t  wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwWwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwW  \n");
printf("\twwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwWwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwWwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
printf("\t   wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwWWwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwWwwwwwwwwwwwwwwwwwwwwwWWWWwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww   \n");

return;
}

void betaw(char betan[20])
{
printf("\n\n\n\n\n\n\t                                                                                                                                                                # #  ( )\n");
printf("\t                                                                                                                                                             ___#_#___|__\n");
printf("\t                                                                                                                                                         _  |____________|  _\n");
printf("\t                              # #  ( )                                                                                                            _=====| | |            | | |==== _\n");
printf("\t                           ___# #___|__                                                                                                     =====| |.---------------------------. | |====\n");
printf("\t                        _ |____________| _                                    %20s WINS!                      <--------------------'   .  .  .  .  .  .  .  .   '--------------/\n",betan);
printf("\t                 _=====| | |            | | |==== _                                                                            \\                                                             /\n");
printf("\t           =====| |.---------------------------. | |====                                                                        \\_______________________________________________BETA________/\n");
printf("\t  wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwWwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwW  \n");
printf("\twwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwWwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwWwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
printf("\t   wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwWWwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwWwwwwwwwwwwwwwwwwwwwwwWWWWwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww   \n");	
}

void draw()
{
printf("\n\n\n\n\n\n\t                               # #  ( )                                                                                                                       # #  ( )\n");
printf("\t                            ___# #___|__      TRUCE!                                                                                           TRUCE!      ___#_#___|__\n");
printf("\t                        _  |____________|  _                                                                                                           _  |____________|  _\n");
printf("\t                 _=====| | |            | | |==== _                                                                                             _=====| | |            | | |==== _\n");
printf("\t           =====| |.---------------------------. | |====                                                                                  =====| |.---------------------------. | |====\n");
printf("\t    \\--------------'   .  .  .  .  .  .  .  .   '-------------------->                       DRAW!                           <--------------------'   .  .  .  .  .  .  .  .   '--------------/\n");
printf("\t     \\                                                             /                                                          \\                                                             /\n");
printf("\t      \\_________ALPHA_____________________________________________/                                                            \\_______________________________________________BETA________/\n");
printf("\t  wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwWwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwW  \n");
printf("\twwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwWwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwWwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww\n");
printf("\t   wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwWWwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwWwwwwwwwwwwwwwwwwwwwwwWWWWwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww   \n");

return;	
}
void init20(int board[6][5])
{
	int g, i;
	
	for(i = 0; i < 6; i++)
		{
			for(g = 0; g < 5; g++)
				board[i][g] = 0;
		}
//	0 - free    ' '
//  1 - Alpha ship ' '
//  2 - Beta ship ' '
//  3 - Both Alpha Beta Ship ' '
//  3 - Miss 'X'
//  4 - Alpha is hit A
//  5 - Beta is hit  B
//  6 - Selection    ?


	board[1][0] = 1;
	board[2][0] = 3;
	board[3][0] = 1;
	board[4][0] = 1;

	board[0][2] = 3;
	board[1][2] = 1;
	board[2][2] = 3;
	board[3][2] = 1;	

	board[2][4] = 1;
	board[3][4] = 1;
	board[4][4] = 3;
	board[5][4] = 1;

	board[0][1] = 2;
	//board[0][2] = 2;
	board[0][3] = 2;
	board[0][4] = 2;

	//board[2][0] = 2;
	board[2][1] = 2;
	//board[2][2] = 2;
	board[2][3] = 2;

	board[4][1] = 2;
	board[4][2] = 2;
	board[4][3] = 2;
	//board[4][4] = 2;
}

void display(int board[6][5], char name[20], int moves, int bTurn)
{
	int i, g;
	char disp[6][5];
	char val;
	
//	0 - free    ' '
//  1 - Alpha ship ' '
//  2 - Beta ship ' '
//  3 - Both Alpha Beta Ship ' '
//  4 - Miss 'X'
//  5 - Alpha is hit A
//  6 - Beta is hit  B
//  7 - Selection    ?

	for(i = 0; i < 6; i++)
	{
		for(g = 0; g < 5; g++)
		{
			if(board[i][g] == 0)
				val = ' ';
			if(board[i][g] == 1)
				val = ' ';
			if(board[i][g] == 2)
				val = ' ';
			
			if(board[i][g] == 3)
				val = ' ';
				
			if(board[i][g] == 4)
				val = 'X';
				
			if(board[i][g] == 5)
				val = 'A';
			
			if(board[i][g] == 6)
				val = 'B';
				
			if(board[i][g] == 7)
				val = '?';
				
			disp[i][g] = val;
		}
	}
	
	
	printf("\t\t\t\t\t\t\t   ___ ___ ___ ___ ___ ___ \n");
	
	for(g = 0; g < 5; g++)
	{
		
		printf("\t\t\t\t\t\t\t%d |", g + 1);
		for(i = 0; i < 6; i++)
			printf(" %c |", disp[i][g]);
			
		if(g == 0)
		{
			if(bTurn == 1)
				printf("\t\tmove: %d || Alpha Turn %s", moves/2 + 1, name);
				
			else
				printf("\t\tmove: %d || Beta Turn %s", moves/2 + 1, name);
		}
		
		printf("\n\t\t\t\t\t\t\t  |___|___|___|___|___|___|\n");
	}
	printf("\t\t\t\t\t\t\t    1   2   3   4   5   6\n");
	
	
	// how it looks
	//printf("  ___ ___ ___ ___ ___ ___ \n");
	//printf("1| %c | %c | %c | %c | %c | %c |\n");
	//printf(" |___|___|___|___|___|___|\n");
	//printf("2| %c | %c | %c | %c | %c | %c |\n");
	//printf(" |___|___|___|___|___|___|\n");
	//printf("3| %c | %c | %c | %c | %c | %c |\n");
	//printf(" |___|___|___|___|___|___|\n");
	//printf("4| %c | %c | %c | %c | %c | %c |\n");
	//printf(" |___|___|___|___|___|___|\n");
	//printf("5| %c | %c | %c | %c | %c | %c |\n");
	//printf(" |___|___|___|___|___|___|\n");
	//printf("    1   2   3   4   5   6\n");
}

void wheretostart(int *column, int *row, int board[6][5])
{
	int i, g;
	
	for(g = 0; g < 5; g++)
		{
			for(i = 0; i < 6; i++)
				{
					if(board[i][g] < 4)
					{
						*column = i;
						*row = g;
						return;
					}
				}
		}
}

void selection(int board[6][5], int *columns, int *rows, int bTurn, int moves, char name[20], char name1[20], char name2[20]) // column select and row select
{
	int ch = 1;
	
	int g, column, row;
	int prevr, prevc, previ = 0;
	
	wheretostart(&column, &row, board);
	// function to where to start kunin value ng first row, column; previ is always 0 dahil space lang dapat laman
	previ = board[column][row];
	
	do
    {
    	prevr = row;
    	prevc = column;
    	
        if (ch == 0 || ch == 224)
        {
        	ch = getch();
        	Beep(932,125);
        	
			if(ch == 72)//up
				{
					g = 0;
					do{
						row = (row - 1 + 5) % 5; // lagay din ng if conditions pag di na free
						if(g == 5)
						{
							column++; // if lahat na ng row empty sa susunod na column ka na maghanap
							g=0;
						}
						g++;
					}while(board[column][row] > 3);
					
				}
				
			if(ch == 75)// left
				{
					g = 0;
					do{
						column = (column - 1 + 6) % 6; // lagay din ng if conditions pag di na free
						if(g == 6)
						{
							row++; // if lahat na ng column empty sa susunod na row ka na maghanap
							g=0;
						}
						g++;
						
					}while(board[column][row] > 3);
					
				}
				
			if(ch == 77)// right
				{
					g = 0;
					do{
						column = (column + 1) % 6; // lagay din ng if conditions pag di na free
						if(g == 6)
						{
							row++; 
							g=0;
						}
						g++;
						
					}while(board[column][row] > 3);
				}
				
			if(ch == 80)// down
				{
					g = 0;
					do{
						row = (row + 1) % 5; // lagay din ng if conditions pag di na free
						if(g == 5)
						{
							column++; // if lahat na ng row empty sa susunod na column ka na maghanap
							g=0;
						}
						g++;
					}while(board[column][row] > 3);
				}
		}
		
		if(ch == '0')
			{
				printf("Enter Coordinates: ");
				scanf("%d %d", &column, &row);
				column--;
				row--;
			}
		
    	board[prevc][prevr] = previ;
    	previ = board[column][row];
		board[column][row] = 7;
		system("cls");
		battleshirls();
		display(board, name, moves,bTurn);
		ships(name1,name2);
		ch = getch();
		
	}while (ch != 13); /* 13 = Enter Key*/
	
	Beep(490,125);
	board[column][row] = previ;
	*columns = column;
	*rows = row;
	
	return;
}

int score(int board[6][5], char name1[20], char name2[20])
{
	int aScore = 0, bScore = 0;
	
	if((board[1][0] == 5) && (board[2][0] == 5) && (board[3][0] == 5) && (board[4][0] == 5))
	{
		bScore++;
	}
	
	if((board[0][2] == 5) && (board[1][2] == 5) && (board[2][2] == 5) && (board[3][2] == 5))
	{
		bScore++;
	}
	
	if((board[2][4] == 5) && (board[3][4] == 5) && (board[4][4] == 5) && (board[5][4] == 5))
	{
		bScore++;
	}
	
	if((board[0][1] == 6) && (board[0][2] == 6) && (board[0][3] == 6) && (board[0][4] == 6))
	{
		aScore++;
	}
	
	if((board[2][0] == 6) && (board[2][1] == 6) && (board[2][2] == 6) && (board[2][3] == 6))
	{
		aScore++;
	}

	if((board[4][1] == 6) && (board[4][2] == 6) && (board[4][3] == 6) && (board[4][4] == 6))
	{
		aScore++;
	}
	
	system("cls");
	battleshirls();
		
	if(aScore > bScore)
	{
		alphaw(name1);
		system("pause");
		return 1;
	}
	
	if(aScore < bScore)
	{
		betaw(name2);
		system("pause");
		return 1;
	}
	
	if(aScore == bScore)
	{
		return 0;
	}
	
	
	return;
}

void game(char name1[20], char name2[20])
{
	
//	board array representations 
//	0 - free    ' '
//  1 - Alpha ship ' '
//  2 - Beta ship ' '
//  3 - Both Alpha Beta Ship ' '
//  4 - Miss 'X'
//  5 - Alpha is hit A
//  6 - Beta is hit  B
//  7 - Selection    ?

	int board[6][5];
	int over = 30;
	int moves = 0;
	int columns, rows; //for selection kung anong column or row seselect
	int scores;
	init20(board);

	do
	{
		if(moves % 2 == 0)// Alpha Turn
		{

			selection(board, &columns, &rows, 1, moves +1, name1, name1, name2);
			if(board[columns][rows] == 2 || board[columns][rows] == 3) // Beta ship
			{
				board[columns][rows] = 6; // Beta is hit
			}
			
			else 
			{
				board[columns][rows] = 4; // Miss	
			}
		
		}
		if(moves % 2 == 1)// Beta Turn
		{

			selection(board, &columns, &rows, 0, moves +1, name2, name1, name2);
			if(board[columns][rows] == 1 || board[columns][rows] == 3) // Alpha ship
			{
				board[columns][rows] = 5; // Alpha is hit
			}
			
			else 
			{
				board[columns][rows] = 4; // Miss	
			}
		}
		
		scores = score(board,name1,name2);
		
		if(scores == 1)
			moves = over;
		
		moves++;
	}while(moves < over);
	
	if(scores == 0)
	{
		draw();
		system("pause");
	}
	
	return;
	
}

void howtoplay(void)
{
	printf("\n\n\n\t\t\tUse Arrow Keys to select a specific spot from the board and Press Enter to select. There are two players Alpha and Beta.\n\t\t\tAlpha always goes first. The objective of the game is to find and hit the shirlps of your opponent. Each players has Three \n\t\t\tShirlps. One Shirlp takes the spot of 4 spaces in the board. If a player manages to hit a part of the shirlp it will display \n\t\t\tthe opposing player's letter - A or B.\n\n\n\t\t\t");
	system("pause");
}

void about()
{
	printf("\n\n\n\t\tProject by:\n\t\t\tLynux Ansay\n\t\t\tJeddryc Tiu\n\t\t\tLenard To\n\n\t\tMahilig po kaming mag League of Legends PM us for ign. Ate Shirley pa-accept po ng friend request.");
	system("pause");
}

void settings(char name1[20], char name2[20])
{
	printf("\n\n\t\t\t\tEnter Alpha name: ");
	gets(name1);
	printf("\t\t\t\tEnter Beta name: ");
	gets(name2);
}

int mainmenu(void)
{
	int ch = 1, mmvc = 0;
	do
    {		
        if (ch == 0 || ch == 224)
        {
        	ch = getch();
        	
			if(ch == 72)
				mmvc = (mmvc - 1 + 5) % 5;
				
			if(ch == 80)
				mmvc = (mmvc + 1) % 5;				
		}
		system("cls");
		battleshirls();
		printf("\t\t\t\t");
		if(mmvc == 0) printf("  >>>>> "); else printf("\t");
		printf("1. Start Game\n");
		printf("\t\t\t\t");
		if(mmvc == 1) printf("  >>>>> "); else printf("\t");
		printf("2. How to play\n");
		printf("\t\t\t\t");
		if(mmvc == 2) printf("  >>>>> "); else printf("\t");
		printf("3. Settings\n");
		printf("\t\t\t\t");
		if(mmvc == 3) printf("  >>>>> "); else printf("\t");
		printf("4. About\n");
		printf("\t\t\t\t");
		if(mmvc == 4) printf("  >>>>> "); else printf("\t");
		printf("5. Exit\n");		
	ch = getch();
			
    }while (ch != 13); /* 13 = Enter Key*/

	return mmvc;
}

int main()
{
	int i;
    fscrn();
	char name1[20], name2[20];
	strcpy(name1, "Player 1");
	strcpy(name2, "Player 2");
	
	do{	
		i = mainmenu();
	    switch(i)
		    {
		    	case 0 : game(name1,name2); break;
		    	case 1 : howtoplay(); break;
		    	case 2 : settings(name1, name2); break;
		    	case 3 : about();break;
			}
	}while(i != 4);


	return 666;	
	
}
