#include<stdio.h>
#include<ctype.h>
void recordplayername()
{
    char name[30],nname[20],cha,c;
    int i,j,px;
    FILE *playername;
    playername=fopen("recordplayername.txt","a+");
    getch();
    system("cls");
    printf("Enter your name\n");
  //  gets(name);
 // fscanf()
 fflush(stdin);
    	fgets(name,30,stdin);
  //  scanf("%[^\n]s",name);
    //printf("player name is %s",name);
    for(j=0; name[j]!='\0'; j++) //to convert the first letter after space to capital
    {
        if(name[0]>='a' && name[0]<='z')
        {
         nname[0]=name[0]-32;
        name[0]=name[0]-32;
        }
      //  nname[0]=toupper(name[0]);
        if(name[j-1]==' ')
        {
            if(name[j]>='a' && name[j]<='z')
            {
            nname[j]=name[j]-32;
            name[j]=name[j]-32;
            }
           // nname[j]=toupper(name[j]);
            nname[j-1]=name[j-1];
        }
        else nname[j]=name[j];
    }
    nname[j]='\0';
    //sdfprintf(playername,"\t\t\tPlayers List\n");*/
    fprintf(playername,"Player Name :%s\n",name);
    //for date and time
    time_t mytime;
    mytime = time(NULL);
    fprintf(playername,"Played Date:%s",ctime(&mytime));
    for(i=0; i<=50; i++)
        fprintf(playername,"%c",'_');
    fprintf(playername,"\n");
    fclose(playername);
    printf("Wanna see past records press 'y'\n");
    cha=getch();
    system("cls");
    if(cha=='y')
    {
        playername=fopen("recordplayername.txt","r");
        do
        {
            putchar(c=getc(playername));
        }
        while(c!=EOF);
    }
    fclose(playername);
}

