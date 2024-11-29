#include<stdio.h>
#include<conio.h>
void main()
{
int a=10,*b,**c;
clrscr();
b=&a;
c=&b;
printf("\n%u",c);//address of b
printf("\n%u",*c);//address of a
printf("\n%d",**c);//value of a
getch();
}