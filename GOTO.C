#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int n;
float s;
clrscr();
start:
printf("enter any positive number\n");
scanf("%d",&n);
if(n<0)
goto start;
else
s=sqrt(n);
printf("\nSquare root=%f",s);
getch();
}