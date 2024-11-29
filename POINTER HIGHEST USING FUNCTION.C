#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
int *p,*q,*r;
void highest (int,int,int);
clrscr();
printf("Enter any three numbers\n");
scanf("%d%d%d",&a,&b,&c);
highest(a,b,c);
getch();
}
void highest (int a,int b,int c)
{
int *p,*q,*r;
p=&a;
q=&b;
r=&c;
if((*p)>(*q)&&(*p)>(*r))
{
printf("Highest value is a:\n");
printf("%d",*p);
}
else
if((*q)>(*p)&&(*q)>(*r))
{
printf("Highest value is b:\n");
printf("%d",*q);
}
else
{
printf("Highest value is c:\n");
printf("%d",*r);
}
}
