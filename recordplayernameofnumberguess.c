#include<stdio.h>
#include<ctype.h>

void recordplayernameofnumberguess()
{
    char ngname[30],ch,c;
    int i,j;
    FILE *numberguessplayer;
    numberguessplayer=fopen("recordplayernameofnumberguess.txt","a+");
    getch();
    system("cls");
    printf("Enter your name\n");
    fflush(stdin);
    scanf("%[^\n]s",ngname);
    for(j=0;ngname[j]!='\0';j++)
    {
        if(ngname[0]>='a'&&ngname[0]<='z')
            ngname[0]=ngname[0]-32;
        if(ngname[j-1]==' ')
            ngname[j]=ngname[j]-32;
    }
    fprintf(numberguessplayer,"Player name : %s\n",ngname);
    time_t mytime;
    mytime=time(NULL);
    fprintf(numberguessplayer,"Played Date : %s\n",ctime(&mytime));
    for(i=0;i<=50;i++)
        fprintf(numberguessplayer,"%c",'*');
    fprintf(numberguessplayer,"\n");
    fclose(numberguessplayer);
    printf("Want to see the past records then press y or Y.\n");
    ch=getch();
    system("cls");
    if(ch=='y'||ch=='Y')
    {
        numberguessplayer=fopen("recordplayernameofnumberguess.txt","r");
        do
        {
            putchar(c=getc(numberguessplayer));
        }while(c!=EOF);
    }
    fclose(numberguessplayer);
}
