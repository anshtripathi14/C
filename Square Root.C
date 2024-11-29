#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int b,p;
float h;
clrscr();
printf("enter two numbers");
scanf("%d%d",&b,&p);
h=sqrt(b*b+p*p);
printf("%f",h);
getch();
}