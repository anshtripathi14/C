#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,A,S,M;
float D;
clrscr();
printf("enter value of x and y\n");
scanf("%d%d",&x,&y);
A=x+y;
printf("\nAddition=%d",A);
S=x-y;
printf("\nSubtraction=%d",S);
M=x*y;
printf("\nMultiplication=%d",M);
D=(float)x/y;
printf("\nDivision=%f",D);
getch();
}