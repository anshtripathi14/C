#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,s,*p,*q;
clrscr();
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
p=&a;
q=&b;
s=*p+*q;
printf("Sum using pointers=%d",s);
getch();
}