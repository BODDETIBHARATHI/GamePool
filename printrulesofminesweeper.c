/*#include<stdio.h>
#include<stdlib.h>
{
    system("cls");
     printf("1. You are in a mine field and you have to successfully flag all the places which have a mine. If you flag all the mines, You win!\n");
        printf("2.In your first turn, you have to choose a starting square. You can open a square by entering its row number(x) and column number(y)(Note: row and column number starts from 1)\n");
        printf("3.If you open a square with a mine, you lose.\n");
        printf("4.If you open a square with a number written on it. The number shows that how many mines are there in the adjacent 8 squares.\n");
        printf("---------------You win when you have correctly identified all mines.---------------\n");
}*/
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void printmineruleslist()
{
    int i,j,k,n=177,il=13;
   /* for(k=10;k<=20;k++)
    {
            gotoxy(20,k);
    }*/
    for(i=0,k=10;i<il,k<23;i++,k++)
    {
            gotorulesprint(20,k);
        for(j=0;j<n;j++)
        {
            if(i==0||i==il-1)
                printf("#");
            else
                if(i==1 && j==1)
                {
printf("#                                                                                                                                                                               #\n");
                gotorulesprint(20,12);
printf("#*************************************************************************Welcome to Minesweeper game***************************************************************************#\n");
                gotorulesprint(20,13);
printf("#                                                                                                                                                                               #\n");
                gotorulesprint(20,14);
printf("#1. You are in a mine field and you have to successfully flag all the places which have a mine. If you flag all the mines, You win!                                             #\n");
                gotorulesprint(20,15);
printf("#                                                                                                                                                                               #\n");
                gotorulesprint(20,16);
printf("#2.In your first turn, you have to choose a starting square. You can open a square by entering its row number(x) and column number(y)(Note: row and column number starts from 1)#\n");
                gotorulesprint(20,17);
printf("#                                                                                                                                                                               #\n");
                gotorulesprint(20,18);
printf("#3.If you open a square with a mine, you lose.                                                                                                                                  #\n");
        gotorulesprint(20,19);
printf("#                                                                                                                                                                               #\n");
                gotorulesprint(20,20);
printf("#4.If you open a square with a number written on it. The number shows that how many mines are there in the adjacent 8 squares.                                                  #\n");
         gotorulesprint(20,21);
printf("#                                                                                                                                                                               #\n");
                gotorulesprint(20,22);
printf("#------------------------------------------------------You win when you have correctly identified all mines.--------------------------------------------------------------------#\n");
                }
               // else
                //printf(" ");
        }
       // printf("\n");
    }

}
void gotorulesprint(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

}

void printrulesofminesweeper()
{
    system("cls");
  //  int k=0;
    //for(k=20;k<=30;k++)
    printmineruleslist();
    //}
    return 0;
}
