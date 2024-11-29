#include<stdio.h>
#include<conio.h>
void main()
{
int r,n,m;
clrscr();
printf("\nenter number\n");
scanf("%d",&n);
m=0;
while(n>0)
{
r=n%10;
m=m*10+r;
n=n/10;
}
printf("\nimage=%d",m);
getch();
}