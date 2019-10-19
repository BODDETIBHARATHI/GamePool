#include<stdio.h>
#include<windows.h>
void print()
{
    int i,j,k,n=50,il=5;
    int ch;
   /* for(k=10;k<=20;k++)
    {
            gotoxy(20,k);
    }*/
    system("cls");
    for(i=0,k=10;i<il,k<20;i++,k++)
    {
            gotoxy(30,k);
        for(j=0;j<n;j++)
        {
            if(i==0||i==il-1)
                printf("#");
            else
                if(i==1 && j==1)
                {
                printf("#             Welcome to Game pool               #\n");
                gotoxy(30,12);
                printf("#                1. MINESWEEPER                  #\n");
                gotoxy(30,13);
                printf("#                2. NUMBER GUESS GAME            #\n");
                }
               // else
                //printf(" ");
        }
       // printf("\n");
    }
    gotoxy(30,15);
                printf("ENTER YOUR CHOICE\n");
                gotoxy(30,17);
scanf("%d",&ch);
if(ch==1)
{
    printpattern();
    printf("Press any key to continue\n");
    getch();
//scanf("%c",&c);
   // if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
// xy:
 //{
     print1stpageofminesweeper();
 }
   else if(ch==2)
       numberguessgame();
}
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

}

void startpage()
{
  //  int k=0;
    //for(k=20;k<=30;k++)
    print();
    //}
    return 0;
}
