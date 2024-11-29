#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter any year\n");
scanf("%d",&n);
if(n%4==0)
printf("the given year is leap year");
else
printf("the giver year is not leap year");
getch();
}
