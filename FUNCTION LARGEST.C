#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
int largest(int,int);//function prototype
clrscr();
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
c=largest(a,b);//function calling
printf("Largest=%d",c);
getch();
}
int largest(int a, int b)//function definition
{
if(a>b)
return(a);
else
return(b);
}
