#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char board[3][3]; 

void initializeBoard()
{
    //init board
    for(int x=0;x<3;x++)
        for(int y=0;y<3;y++)
            board[x][y] = ' ';   
}


void humanPlayerMove()
{
    //Get Value from player
    int row, col;
    printf("Enter Row (0 to 2): ");
    scanf("%d", &row);
    printf("Enter Column (0 to 2): ");
    scanf("%d", &col);

    //make move
    board[row][col] = 'X';
}

//Displays the Game Board
void displayBoard()
{
    for(int x=0;x<3;x++){
        for(int y=0;y<3;y++) {
            printf("%c|",board[x][y]);   
        }
        printf("\n");
    }
}

void computerPlayerMove()
{
    srand(time(NULL)); //random seed
    int row, col;
    do
    {
        row = rand() % 3;
        col = rand() % 3;
    }while(board[row][col] != ' ');

    board[row][col] = 'O';
    
}


