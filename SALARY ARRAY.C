#include<stdio.h>
#include<conio.h>
void main()
{
int sal[10],T,i;
float A;
clrscr();
for(i=0;i<=9;i++)
{
printf("Enter salary= ");
scanf("%d",&sal[i]);
}
T=0;
for(i=0;i<=9;i++)
{
T=T+sal[i];
}
A=T/10.0;
printf("\nTotal salary=%d\n",T);
printf("Average salary=%f",A);
getch();
}