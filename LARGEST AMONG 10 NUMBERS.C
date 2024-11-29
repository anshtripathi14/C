#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,t;
clrscr();
t=1;
m=0;
while(t<=10)
{
printf("enter number=\t");
scanf("%d",&n);
if(n>m)
m=n;
t++;
}
printf("Largest=%d",m);
getch();
}