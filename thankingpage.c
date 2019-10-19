#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
void gotoplace(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);

}
void thankingpage()
{
system("cls");
	int color;
	int bcolor;
	int x,y;
	int d;
int c=100;
	while(c>0)
	{
		//generate random X and Y Co-ordinates
		x = rand()%200;
		y = rand()%50;
		//define position to print the text
		gotoplace(x,y);
		//print the text
		printf("*");
		c--;
	}
gotoplace(95,25);
            printf("Thankyou for playing MINESWEEPER.\n");
            getch();
            recordplayername();
	return 0;
}
