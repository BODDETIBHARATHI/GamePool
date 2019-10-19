#include<stdio.h>
#define MAXSIDE 25

int SIDE;
int MINES;

void printminesweeperboard(char myBoard[][MAXSIDE])
{
    int i, j;

    printf("    ");

    for (i=0; i<SIDE; i++)
    {
        printf ("%d", i);
    if(i<=9)
            printf("   ");
        else
            printf("  ");
    }
    printf ("\n");

    for (i=0; i<SIDE; i++)
    {
        printf ("%d", i);
             if(i<=9)
            printf("   ");
        else
            printf("  ");
        for (j=0; j<SIDE; j++)
        {
            printf ("%c", myBoard[i][j]);
            if(j<=9)
            printf("   ");
        else
            printf("   ");
        }
        printf ("\n");
    }
    return;
}

