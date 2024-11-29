#include<stdio.h>
#include<conio.h>
void main()
{
float f,c;
clrscr();
printf("enter the temp in fahrenheit");
scanf("%f",&f);
c=((f-32)*5)/9;
printf("c=%f",c);
getch();
}