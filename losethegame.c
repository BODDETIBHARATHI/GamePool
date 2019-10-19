#include<stdio.h>
#include"gamepoolheader.h"
void losethegame()
{
char ch;
system("cls");
    printf("Sorry!!!\nYou lost the game\n");
    printf("Want to play again then press y or Y.\nWant to go back then press b or B.\nAny other key to exit from here\n");
    ch=getch();
    if(ch=='y'||ch=='Y')
    {
        playminesweepergame();
    }
    else if(ch=='b' || ch=='B')
    startpage();
    else
thankingpage();
}
