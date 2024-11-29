#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("enter any number");
scanf("%d",&n);
if(n%3==0&&n%5==0)
printf("number is divisible by 3 and 5");
else
printf("number is not divisible by 3 and 5");
getch();
}