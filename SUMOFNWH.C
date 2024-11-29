#include<stdio.h>
#include<conio.h>
void main()
{
int s,n;
clrscr();
printf("enter value of n\n");
scanf("%d",&n);
s=0;
while(n>=1)
{
s=s+n;
n=n-1;
}
printf("Sum=%d",s);
getch();
}
