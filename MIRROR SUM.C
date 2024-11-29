#include<stdio.h>
#include<conio.h>
void main()
{
int r,n,m;
clrscr();
printf("enter number\n");
scanf("%d",&n);
m=0;
while(n>0)
{
r=n%10;
m=m+r;
n=n/10;
}
printf("sum=%d",m);
getch();
}