#include<stdio.h>
#include<conio.h>
void main()
{
int n,s;
clrscr();
n=3;
s=0;
while(n<=30)
{
s=s+n;
n=n+3;
}
printf("\nSum=%d",s);
getch();
}