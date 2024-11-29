#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter value of a and b");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("swap a=%d\n",a);
printf("swap b=%d",b);
getch();
}
