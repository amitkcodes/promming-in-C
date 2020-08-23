#include <stdio.h>
#include<conio.h>
char a[9]={'1','2','3','4','5','6','7','8','9'};
int end=1,k=0;
void draw()
{
  printf("\t\t\t %c| %c| %c\n",a[0],a[1],a[2]);
  printf("\t\t\t--|--|--\n");
    printf("\t\t\t %c| %c| %c\n",a[3],a[4],a[5]);
    printf("\t\t\t--|--|--\n");
    printf("\t\t\t %c| %c| %c\n",a[6],a[7],a[8]);
}
void getinput()
{
    char ch;
    int i;
    printf("\nEnter the possion :\n\n");
    scanf("%c",&ch);
    if(k==0)
	{
	    for(i=0;i<=8;i++)
	    {
		if(a[i]==ch)
		{
		    a[i]='x';
		    k=1;
		    break;
		}
	    }

	}
    else
    {

	    for(i=0;i<=8;i++)
	    {
		if(a[i]==ch)
		{
		    a[i]='0';
		    k=0;
		    break;
		}
	    }

    }
}
int gameover()
{
     if(a[0]=='x'&&a[1]=='x'&&a[2]=='x')
     return(1);
     else if(a[0]=='x'&&a[3]=='x'&&a[6]=='x')
     return(1);
     else if(a[0]=='x'&&a[4]=='x'&&a[8]=='x')
     return(1);
     else if(a[1]=='x'&&a[4]=='x'&&a[7]=='x')
     return(1);
     else if(a[2]=='x'&&a[5]=='x'&&a[8]=='x')
     return(1);
     else if(a[2]=='x'&&a[4]=='x'&&a[6]=='x')
     return(1);
     else if(a[3]=='x'&&a[4]=='x'&&a[5]=='x')
     return(1);
     else if(a[6]=='x'&&a[7]=='x'&&a[8]=='x')
     return(1);


     else if(a[0]=='0'&&a[1]=='0'&&a[2]=='0')
     return(2);
     else if(a[0]=='0'&&a[3]=='0'&&a[6]=='0')
     return(2);
     else if(a[0]=='0'&&a[4]=='0'&&a[8]=='0')
     return(2);
     else if(a[1]=='0'&&a[4]=='0'&&a[7]=='0')
     return(2);
     else if(a[2]=='0'&&a[5]=='0'&&a[8]=='0')
     return(2);
     else if(a[2]=='0'&&a[4]=='0'&&a[6]=='0')
     return(2);
     else if(a[3]=='0'&&a[4]=='0'&&a[5]=='0')
     return(2);
     else if(a[6]=='0'&&a[7]=='0'&&a[8]=='0')
     return(2);
     else
     return(3);
}
void final()
{
    int var;
    var=gameover();
    if(var==1)
    {
	printf("\nPlayer one won :");
	end=0;
    }
    else if(var==2)
    {
	printf("\nPlayer two won :");
	end=0;
    }

}

int main(void) {
    char c;
    label:

	draw();
	while(end)
	{
	getinput();
	clrscr();
	draw();
	final();
	}
	printf("\n Do you want to play again :");
	printf("\nIf yes press y :");
	fflush(stdin);
	scanf("%c",&c);
	if(c=='y'||c=='Y')
	{
	    a[0]='1';a[1]='2';a[2]='3';a[3]='4';a[4]='5';a[5]='6';a[6]='7';a[7]='8';a[8]='9';
	    k=0,end=1;
	    goto label;
	}
	printf("\nThank you");
	getch();
	return 0;
}

