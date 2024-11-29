#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,A,S,M,opt;
float D;
clrscr();
printf("enter any two numbers\n");
scanf("%d%d",&x,&y);
printf("Main Menu\n");
printf("1.Addition\n");
printf("2.Subtraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
scanf("%d",&opt);
switch(opt)
{
case 1:A=x+y;
printf("\nAddition=%d",A);
break;
case 2:S=x-y;
printf("\nSubtraction=%d",S);
break;
case 3:M=x*y;
printf("\nMultiplication=%d",M);
break;
case 4:D=(float)x/y;
printf("\nDivision=%f",D);
break;
default:printf("error");
break;
}
getch();
}