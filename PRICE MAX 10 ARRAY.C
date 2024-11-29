#include<stdio.h>
#include<conio.h>
void main()
{
int price[10],i,m;
clrscr();
m=0;
for(i=0;i<10;i++)
{
printf("enter the price of item= ");
scanf("%d",&price[i]);
}
for(i=0;i<10;i++)
{
if(price[i]>m)
m=price[i];
}
printf("Maximum price= %d",m);
getch();
}