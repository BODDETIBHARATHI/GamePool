#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

#include "gamepoolheader.h"
void printminerules()
{
    int i,j,k,n=50,il=6;
   /* for(k=10;k<=20;k++)
    {
            gotoxy(20,k);
    }*/
    xy:
    {
        system("cls");
    for(i=0,k=10;i<il,k<20;i++,k++)
    {
            gotorules(30,k);
        for(j=0;j<n;j++)
        {
            if(i==0||i==il-1)
                printf("#");
            else
                if(i==1 && j==1)
                {
                printf("#         Welcome to minesweeper pool            #\n");
                gotorules(30,12);
                printf("#               1. PLAY MINESWEEPER              #\n");
                gotorules(30,13);
                printf("#            2. RULES FOR PLAYING GAME           #\n");
                gotorules(30,14);
                printf("#             3. TO GO TO START PAGE             #\n");
                }
        }
    }
    }

         int ch,kc;
         gotorules(30,16);
            printf("ENTER YOUR CHOICE\n");
            gotorules(30,17);
     scanf("%d",&kc);
 if(kc==1)
 {
     //playminesweepergame();
     clock_t t;
    t = clock();
         chooselevel();
    playminesweepergame();
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds

    printf("You took %f seconds to play minesweeper game.\n", time_taken);
     //printminesweeperboard();
 }
 else if(kc==2)
 {
     printrulesofminesweeper();
     getch();
     goto xy;
     //print1stpageofminesweeper();
 }
 else if(kc==3)
    startpage();
     else
        printf("Please enter valid key\n");
}
void gotorules(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

}

void print1stpageofminesweeper()
{
    system("cls");
  //  int k=0;
    //for(k=20;k<=30;k++)
    printminerules();
    //}
    return 0;
}
