#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,*b;
clrscr();
b=&a;
printf("\n%u",b);//address of a
printf("\n%d",*b);//value of a
getch();
}