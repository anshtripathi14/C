#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,m,a;
clrscr();
printf("enter any three digit number\n");
scanf("%d",&n);
a=n;
m=0;
while(n>0)
{
r=n%10;
m=m+(r*r*r);
n=n/10;
}
if(a==m)
printf("the number is armstrong");
else
printf("the number is not armstrong");
getch();
}
