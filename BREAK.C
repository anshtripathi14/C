#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
for(n=1;n<=10;n++)
{
if(n==4)
break;
printf("\t%d",n);
}
getch();
}