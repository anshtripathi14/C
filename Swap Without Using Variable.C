#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("enter value of a and b");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("swap a=%d\n",a);
printf("swap b=%d",b);
getch();
}
