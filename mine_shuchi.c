#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int s[5][5]={{0}};
char p[5][5]={
         {'*','*','*','*','*'},
         {'*','*','*','*','*'},
         {'*','*','*','*','*'},
         {'*','*','*','*','*'},
         {'*','*','*','*','*'}
         };
void instalbombs();
void printboard();
int main(void)
{
    printf("enter no. of players");
    int g;
    scanf("%d",&g);
    
    while(g>0)
    {
         printf("\nplayer%d",g);
         printf("\n");
         instalbombs();
         printboard();
          int n=0;
          while(n<15)
          {
           printf("\nEnter a position(x,y)");
           int a;
           int b;
           scanf("%d %d",&a,&b);
           if(a<6 && b<6)
           {
            if(s[a-1][b-1]==1)
             {
               p[a-1][b-1]='#';
               printboard();
               printf("\nGame Over");
               break;
             }
              
              else
             {
               p[a-1][b-1]='^';
              printboard();
              }
           }
            else
            {
             printf("\nwrong Input");
            }
            n++;
           }
        g--;
    }
    
    return 0;
}
void instalbombs()
{
    for(int i=0;i<10;i++)
         {
           srand(time(NULL));
           s[rand()%5][rand()%5]=1;
         }  
}
void printboard()
{
     for(int j=0;j<5;j++)
          {
           for(int k=0;k<5;k++)
           {
             printf("%c",p[j][k]);
           }
           printf("\n");
          }
}
