#include<stdio.h>
#define EASY 0
#define MEDIUM 1
#define HARD 2
int SIDE;
int MINES;
void chooselevel ()
{
    /*
    --> EASY = 9 * 9 Cells and 10 Mines
    --> MEDIUM = 16 * 16 Cells and 40 Mines
    --> HARD = 24 * 24 Cells and 99 Mines
    */

    int level;
    system("cls");

    printf("Choose the Level of the MINESWEEPER you want to play\n");
    printf("Press 0 for EASY\n");
    printf("Press 1 for MEDIUM\n");
    printf("Press 2 for HARD\n");
    scanf("%d", &level);
    if (level == EASY)
    {
        SIDE = 9;
        MINES = 10;
    }

    if (level == MEDIUM)
    {
        SIDE = 16;
        MINES = 40;
    }

    if (level == HARD)
    {
        SIDE = 24;
        MINES = 99;
    }

    return;
}
