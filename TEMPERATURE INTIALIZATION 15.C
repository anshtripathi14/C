#include<stdio.h>
#include<conio.h>
void main()
{
float temp[15]={19,21,33.3,46.2,50,60,70,80,90,100,11,12,13,14,15},A,i,T;
clrscr();
T=0;
for(i=0;i<15;i++)
{
T=T+temp[i];
}
A=T/15.0;
printf("\nAverage temp.=%f",A);
getch();
}