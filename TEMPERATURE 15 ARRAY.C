#include<stdio.h>
#include<conio.h>
void main()
{
float temp[15],A,i,T;
clrscr();
for(i=0;i<15;i++)
{
printf("enter temperature= ");
scanf("%f",&temp[i]);
}
T=0;
for(i=0;i<15;i++)
{
T=T+temp[i];
}
A=T/15.0;
printf("\nAverage temp.=%f",A);
getch();
}