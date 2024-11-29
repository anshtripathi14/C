#include<stdio.h>
#include<conio.h>
void main()
{
int n,c;
int cube(int);//function prototype
clrscr();
printf("\nEnter a number\n");
scanf("%d",&n);
c=cube(n);//function calling
printf("\nCube=%d",c);
getch();
}
int cube(int n)//function definition
{
int c;
c=n*n*n;
return(c);
}
