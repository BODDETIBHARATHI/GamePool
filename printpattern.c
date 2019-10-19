#include <stdio.h>
#include<stdlib.h>
#include "gamepoolheader.h"

void printpattern()
{
    int i, j, n=20;
    char c;
    system("cls");
   // scanf("%d", &n);
    // upper half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i + j <= n - 1)  // upper left triangle
                printf("*");
            else
                printf(" ");
            if((i + n) <= j)  // upper right triangle
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
    for(j=0;j<(2*n);j++)
    {
        if(i==0||i==2)
            printf("X ");
        else
    {
        if(i==1 && j==1)
        {
        printf(" X   @     @ @@@@@ @     @ @@@@@  @@@@ @     @ @@@@@ @@@@@ @@@@  @@@@@ @@@@    X\n");
        printf(" X   @@   @@   @   @@    @ @     @     @     @ @     @     @   @ @     @   @   X\n");
        printf(" X   @ @ @ @   @   @ @   @ @     @     @     @ @     @     @   @ @     @   @   X\n");
        printf(" X   @  @  @   @   @  @  @ @@@@@  @@@  @  @  @ @@@@@ @@@@@ @@@@  @@@@@ @@@@    X\n");
        printf(" X   @     @   @   @   @ @ @         @ @ @ @ @ @     @     @     @     @ @     X\n");
        printf(" X   @     @   @   @    @@ @         @ @@   @@ @     @     @     @     @  @    X\n");
        printf(" X   @     @ @@@@@ @     @ @@@@@ @@@@  @     @ @@@@@ @@@@@ @     @@@@@ @   @   X");
        }
    }
    }
    printf("\n");
    }
    // bottom half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i >= j)  //bottom left triangle
                printf("*");
            else
                printf(" ");
            if(i >= (2 * n - 1) - j)  // bottom right triangle
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    scanf("%c",&c);
    if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
         print1stpageofminesweeper();
    return;
}
