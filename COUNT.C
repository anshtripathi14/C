#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,r,c;
clrscr();
printf("Enter any number\n");
scanf("%d",&n);
m=0;
c=0;
while(n>0)
{
r=n%10;
m=m+r;
n=n/10;
c=c+1;
}
printf("Count=%d",c);
getch();
}
