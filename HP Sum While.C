#include<stdio.h>
#include<conio.h>
void main()
{
int n;
float s;
clrscr();
n=1;
s=0;
while(n<=25)
{
s=s+(1.0/n);
n=n+3;
}
printf("Sum=%f",s);
getch();
}