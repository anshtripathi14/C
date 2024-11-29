#include<stdio.h>
#include<conio.h>
void main()
{
int f,n;
clrscr();
printf("enter value of n\n");
scanf("%d",&n);
f=1;
while(n>=1)
{
f=f*n;
n=n-1;
}
printf("factorial=%d",f);
getch();
}