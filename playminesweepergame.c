#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<string.h>
#include "gamepoolheader.h"

#define BEGINNER 0
#define INTERMEDIATE 1
#define ADVANCED 2
#define MAXSIDE 25
#define MAXMINES 99
#define MOVESIZE 526 // (25 * 25 - 99)

int SIDE ; // side length of the board
int MINES ; // number of mines on the board

int isValid(int row, int col)
{
    return (row >= 0) && (row < SIDE) &&
           (col >= 0) && (col < SIDE);
}

int isMine (int row, int col, char board[][MAXSIDE])
{
    if (board[row][col] == '*')
        return (1);
    else
        return (0);
}

void makeMove(int *x, int *y)
{
    printf("Enter your move, (row, column) -> ");
    scanf("%d %d", x, y);
    return;
}
int countAdjacentMines(int row, int col, int mines[][2],
                      char realBoard[][MAXSIDE])
{

    int i;
    int count = 0;
  if (isValid (row-1, col) == 1)
        {
               if (isMine (row-1, col, realBoard) == 1)
               count++;
        }
        if (isValid (row+1, col) == 1)
        {
               if (isMine (row+1, col, realBoard) == 1)
               count++;
        }

        if (isValid (row, col+1) == 1)
        {
            if (isMine (row, col+1, realBoard) == 1)
               count++;
        }

        if (isValid (row, col-1) == 1)
        {
               if (isMine (row, col-1, realBoard) == 1)
               count++;
        }

        if (isValid (row-1, col+1) == 1)
        {
            if (isMine (row-1, col+1, realBoard) == 1)
               count++;
        }

        if (isValid (row-1, col-1) == 1)
        {
             if (isMine (row-1, col-1, realBoard) == 1)
               count++;
        }

        if (isValid (row+1, col+1) == 1)
        {
               if (isMine (row+1, col+1, realBoard) == 1)
               count++;
        }

        if (isValid (row+1, col-1) == 1)
        {
            if (isMine (row+1, col-1, realBoard) == 1)
               count++;
        }

    return (count);
}

int playminesweepergameUtil(char myBoard[][MAXSIDE], char realBoard[][MAXSIDE],int mines[][2], int row, int col, int *movesLeft)
{

    if (myBoard[row][col] != '-')
        return (0);

    int i, j;
    if (realBoard[row][col] == '*')
    {
        myBoard[row][col]='*';

        for (i=0; i<MINES; i++)
            myBoard[mines[i][0]][mines[i][1]]='*';

        printminesweeperboard (myBoard);
        losethegame();
      /*  printf ("\nYou lost!\nBetter luck next time.\n");
        getch();
        if(1)
        {
            system("cls");
            thankingpage();
            getch();
          //  printf("Thankyou for playing MINESWEEPER.\n");
        recordplayername();
        }*/
        return (1) ;
    }

    else
     {
        int count = countAdjacentMines(row, col, mines, realBoard);
        (*movesLeft)--;

        myBoard[row][col] = count + '0';

        if (!count)
        {
            if (isValid (row-1, col) == 1)
            {
                   if (isMine (row-1, col, realBoard) == 0)
                   playminesweepergameUtil(myBoard, realBoard, mines, row-1, col, movesLeft);
            }

            if (isValid (row+1, col) == 1)
            {
                   if (isMine (row+1, col, realBoard) == 0)
                    playminesweepergameUtil(myBoard, realBoard, mines, row+1, col, movesLeft);
            }

            if (isValid (row, col+1) == 1)
            {
                if (isMine (row, col+1, realBoard) == 0)
                    playminesweepergameUtil(myBoard, realBoard, mines, row, col+1, movesLeft);
            }

            if (isValid (row, col-1) == 1)
            {
                   if (isMine (row, col-1, realBoard) == 0)
                    playminesweepergameUtil(myBoard, realBoard, mines, row, col-1, movesLeft);
            }

            if (isValid (row-1, col+1) == 1)
            {
                if (isMine (row-1, col+1, realBoard) == 0)
                    playminesweepergameUtil(myBoard, realBoard, mines, row-1, col+1, movesLeft);
            }

            if (isValid (row-1, col-1) == 1)
            {
                 if (isMine (row-1, col-1, realBoard) == 0)
                    playminesweepergameUtil(myBoard, realBoard, mines, row-1, col-1, movesLeft);
            }

            if (isValid (row+1, col+1) == 1)
            {
                 if (isMine (row+1, col+1, realBoard) == 0)
                    playminesweepergameUtil(myBoard, realBoard, mines, row+1, col+1, movesLeft);
            }

            if (isValid (row+1, col-1) == 1)
            {
                if (isMine (row+1, col-1, realBoard) == 0)
                    playminesweepergameUtil(myBoard, realBoard, mines, row+1, col-1, movesLeft);
            }
        }

        return (0);
    }
}

void placeMines(int mines[][2], char realBoard[][MAXSIDE])
{
    int mark[MAXSIDE*MAXSIDE];
    memset (mark, 0, sizeof (mark));
    for (int i=0; i<MINES; )
     {
        int random = rand() % (SIDE*SIDE);
        int x = random / SIDE;
        int y = random % SIDE;
        if (mark[random] == 0)
        {
            mines[i][0]= x;
            mines[i][1] = y;
            realBoard[mines[i][0]][mines[i][1]] = '*';
            mark[random] = 1;
            i++;
        }
    }

    return;
}

void initialise(char realBoard[][MAXSIDE], char myBoard[][MAXSIDE])
{
    srand(time (NULL));
    for (int i=0; i<SIDE; i++)
    {
        for (int j=0; j<SIDE; j++)
        {
            myBoard[i][j] = realBoard[i][j] = '-';
        }
    }

    return;
}
void replaceMine (int row, int col, char board[][MAXSIDE])
{
    for (int i=0; i<SIDE; i++)
    {
        for (int j=0; j<SIDE; j++)
            {
                if (board[i][j] != '*')
                {
                    board[i][j] = '*';
                    board[row][col] = '-';
                    return;
                }
            }
    }
    return;
}

void playminesweepergame ()
{
    int gameOver = 0;
    system("cls");
    char realBoard[MAXSIDE][MAXSIDE], myBoard[MAXSIDE][MAXSIDE];

    int movesLeft = SIDE * SIDE - MINES, x, y;
    int mines[MAXMINES][2];
      initialise (realBoard, myBoard);
    placeMines (mines, realBoard);

    int currentMoveIndex = 0;
    while (gameOver == 0)
     {
        printf ("Minesweeeper Board :---------- \n");
        printminesweeperboard (myBoard);
        makeMove (&x, &y);
        if (currentMoveIndex == 0)
        {
            if (isMine (x, y, realBoard) == 1)
                replaceMine (x, y, realBoard);
        }

        currentMoveIndex ++;

        gameOver = playminesweepergameUtil (myBoard, realBoard, mines, x, y, &movesLeft);

        if ((gameOver == 0) && (movesLeft == 0))
         {
             wonthegame();
           /* printf ("\nYou won !\nCongratulations for your success.\n");
            getch();
            if(1)
            {
                system("cls");
                thankingpage();
                getch();
               // printf("Thankyou for playing MINESWEEPER.\n");
            recordplayername();
            }*/
            gameOver = 1;
         }
    }
    return;
}

