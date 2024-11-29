#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int p,r,t;
float ci;
clrscr();
printf("enter the values of p r t ");
scanf("%d%d%d",&p,&r,&t);
ci=p*pow(1+r/100,t)-p;
printf("ci=%f",ci);
getch();
}