#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
printf("a is the largest");
else
if(b>c&&b>a)
printf("b is the largest");
else
printf("c is the largest");
getch();
}
