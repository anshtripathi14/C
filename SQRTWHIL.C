#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n;
float s;
clrscr();
n=1;
while(n<=9)
{
s=sqrt(n);
printf("\nSquare Root=%f",s);
n=n+2;
}
getch();
}