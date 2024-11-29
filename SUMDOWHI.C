#include<stdio.h>
#include<conio.h>
void main()
{
int s,n;
clrscr();
n=1;
s=0;
do
{
s=s+n;
n++;
}while(n<=10);
printf("sum=%d",s);
getch();
}
