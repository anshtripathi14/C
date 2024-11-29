#include<stdio.h>
#include<conio.h>
void main()
{
int i,num[5],Se,So;
clrscr();
for(i=0;i<5;i++)
{
printf("enter number= ");
scanf("%d",&num[i]);
}
Se=0;
So=0;
for(i=0;i<5;i++)
{
if(num[i]%2==0)
Se=Se+num[i];
else
So=So+num[i];
}
printf("\nSum of even numbers= %d",Se);
printf("\nSum of odd number= %d",So);
getch();
}
