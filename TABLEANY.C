#include<stdio.h>
#include<conio.h>
void main()
{
int n,t,r;
clrscr();
printf("Enter any number\n");
scanf("%d",&n);
for(t=1;t<=10;t++)
{
r=n*t;
printf("\n%d*%d=%d",n,t,r);
}
getch();
}
