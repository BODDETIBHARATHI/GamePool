#include<stdio.h>
int number;
int chance;
void guessedthenumber()
{
    char ch;
system("cls");
    printf("Congratulations!!!\nYou won the game\n");
        printf("******Guessed correctly the number %d in %d chances******",number,chance);
    printf("Want to play again then press y or Y.\nWant to go back then press b or B.\nAny other key to exit from here\n");
    ch=getch();
    if(ch=='y'||ch=='Y')
    {
        numberguessgame();
    }
    else if(ch=='b' || ch=='B')
    startpage();
    else
thankingpageofnumberguess();
}
