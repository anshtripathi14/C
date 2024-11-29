#include<stdio.h>
#include<conio.h>
void main()
{
int f,n,i;
int fib(int);
clrscr();
printf("enter no. of terms of fibonacci\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
f=fib(i);
printf("fib=%d\n",f);
}
getch();
}
int fib(int i)
{
if(i==0||i==1)
return(i);
else
return(fib(i-1)+fib(i-2));
}
























































