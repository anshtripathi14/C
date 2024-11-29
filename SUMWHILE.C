#include<stdio.h>
#include<conio.h>
void main()
{
int s,n;
clrscr();
n=1;
s=0;
while(n<=10)
{
s=s+n;
n=n+1;
}
printf("\nSum=%d",s);
getch();
}