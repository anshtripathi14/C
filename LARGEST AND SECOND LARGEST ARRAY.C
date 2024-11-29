#include<stdio.h>
#include<conio.h>
void main()
{
int num[5],i,L1,L2;
clrscr();
L1=0;
L2=0;
for(i=0;i<5;i++)
{
printf("enter num= ");
scanf("%d",&num[i]);
}
for(i=0;i<5;i++)
{
if(num[i]>L1)
L1=num[i];
}
printf("Largest= %d",L1);
for(i=0;i<5;i++)
{
if(num[i]>L2&&num[i]!=L1)
L2=num[i];
}
printf("\nSecond largest= %d",L2);
getch();
}
