#include<stdio.h>
#include<conio.h>
void main()
{
int s,n;
clrscr();
n=1;
do
{
s=n*n;
printf("Square=%d\n",s);
n++;
}while(n<=10);
getch();
}
