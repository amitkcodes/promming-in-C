#include<stdio.h>
#include<stdlib.h>
int length=50,hight=50,gameover;
int fruitx,fruity,x,y,score,flag;
void setup()
{
    gameover=0;
    x=length/2;
    y=hight/2;
    
    label1:
    fruitx=rand%50;
    if(fruitx==0)
    goto label1;
    
       
    label2:
    fruity=rand%50;
    if(fruity==0)
    goto label2;
    score=0;
}
void draw()
{
    int i,j;
    system("cls");
    for(i=0;i<50;i++)
    {
        for(j=0;j<50;j++)
        {
            if(i==0||i==length-1||j==0||j==hight-1)
            {
                printf("*");
            }
            else{
                if(i==x&&j==y)
                printf("O");
                else if(i==fruitx&&y==fruity)
                printf("F");
                else
                printf(" ");
            }
        }
        printf("\n");
    }
}

void input()
{
    if(kbhit())
    {
        switch(getch())
        {
            case 'a':
            flag=1;
            break;
            case 's':
            flag=2;break;
            case 'w':
            flag=3;break;
            case 'z':
            flag=4;break;
            case 'x':
            gameover=1;break;
        }
        
    }
}
void makelogic()
{
   switch(flag)
   {
       case 1:
       y--;break;
       case 2:
       x++;break;
       case 3:
       x--;break;
       case 4:
       y++;break;
       default:
       break;
   }
   if(x<0||x>length||y<0||y>length)
   {
       gameover=1;
   }
   if(x==fruitx && y==fruity)
   {
         
    label3:
    fruitx=rand%50;
    if(fruitx==0)
    goto label3;
    
       
    label4:
    fruity=rand%50;
    if(fruity==0)
    goto label4;
    score+=10;
   }
}
int main()
{   
    int i,j;
    label5:
    setup();
    while(!gameover)
    {
    draw();
    input();
    makelogic();
    }
    for(i=0;i<=1000;i++)
    {
        for(j=0;j<=10000;j++){
            
        }
    }
    printf("\n press Y to countinue again :");
    scanf("%c",&c);
    if(c=='y'||c=='Y')
    {
        goto label5:
    }
    return(0);
}