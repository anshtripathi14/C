#include<stdio.h>
#include<conio.h>
void main()
{
int f,n;
int factorial (int);
clrscr();
printf("Enter any number\n");
scanf("%d",&n);
f=factorial(n);
printf("Factorial=%d",f);
getch();
}
int factorial (int n)
{
int f=1;
if(n==0)
return(f);
else
return(n*factorial(n-1));
}
