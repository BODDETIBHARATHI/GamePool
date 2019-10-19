#include <stdio.h>
#include<stdlib.h>
int number;
int chance;
void numberguessgame()
{
    int guess,x=1;
int numberofchances;
int inputType;
char cn,cc;
    system("cls");
printf("Enter the type of input.\nEnter 1 if you want to play the game with 2 players.\nEnter 2 if you want to play with the system.\n");
scanf("%d",&inputType);
if (inputType == 1) {
        number=0;
        numberofchances=0;
printf("Enter the number to be guessed\n");
while((cn=getch())!=13)
{
    number=number*10+((int)(cn-'0'));
}

   // scanf("%d", &number);
    printf("Enter number of chances for the player\n");
    while((cc=getch())!=13)
{
    numberofchances=numberofchances*10+((int)(cc-'0'));
}
    //scanf("%d",&numberofchances);
}
else if(inputType==2)
{
        srand(time(0));
    number=rand()%100;
    numberofchances=rand()%20;
}

while(1){
        printf("Enter your guess\n");
  scanf("%d",&guess);
  chance++;
  if(guess<number)
  printf("===>Number to be guessed is higher than %d\n",guess);
else if(number<guess)
  printf("===>Number to be guessed is lesser than %d\n",guess);
else if(number==guess)
{
    guessedthenumber();
//printf("===>Guessed correctly the number %d in %d chances",number,chance);
break;
}
if(chance==numberofchances)
{
printf("===>You were not able to guess %d in 20 chances",number);
 break;
}
 else
 printf("===>Chances left : %d\n",(numberofchances-chance));
}
  return 0;
}
