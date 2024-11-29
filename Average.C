#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
float d;
clrscr();
printf("enter three values");
scanf("%d%d%d",&a,&b,&c);
d=(a+b+c)/3.0;
printf("avg=%f",d);
getch();
}