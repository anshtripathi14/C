#include<stdio.h>
#include<conio.h>
void main()
{
int n,p;
clrscr();
n=10;
p=1;
while(n>1)
{
p=p*n;
n-=2;
}
printf("\nProduct of series(10.8.6.4.2)= %d",p);
getch();
}
