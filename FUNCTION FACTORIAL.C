#include<stdio.h>
#include<conio.h>
void main()
{
int f,n;
int factorial(int);//function prototype
clrscr();
printf("enter any number\n");
scanf("%d",&n);
f=factorial(n);//function calling
printf("factorial=%d",f);
getch();
}
int factorial(int n)//function definition
{
int f;
f=1;
while(n>=1)
{
f=f*n;
n--;
}
return(f);
}
