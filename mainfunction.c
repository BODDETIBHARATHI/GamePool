#include<stdio.h>
#include<conio.h>
#include<time.h>
#include "gamepoolheader.h"

int SIDE;
int MINES;

int main()
{
    int ch,kc;
    char c;
    startpage();
//gotoxy(40,30);
/*scanf("%d",&ch);
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
    /* else
     {
        printf("Please enter valid key\n");
printf("Press any key to continue\n");
//scanf("%d",&kc);
do         {
             printf("Please enter 'y' or 'Y' to continue\n");
              scanf("%d",&kc);
         }         while(kc!='y'&&kc!='Y');
if(kc=='y'||kc=='Y')
         print1stpageofminesweeper();
     }*/
  /*   scanf("%d",&kc);
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
     else
        printf("Please enter valid key\n");
}
    else if(ch==2)
       numberguessgame();*/
       //else
       //scanf("%d",&i);
    //printf("choice=%d",i);
printf("return to main");
    return 0;
}
