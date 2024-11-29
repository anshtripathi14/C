#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int l,b,P,A,opt;
float D;
clrscr();
printf("enter length and breadth\n");
scanf("%d%d",&l,&b);
printf("Main Menu\n");
printf("1. Area\n");
printf("2. Perimeter\n");
printf("3. Diagonal\n");
printf("\n optional\n");
scanf("%d",&opt);
switch(opt)
{
case 1:A=l*b;
printf("\nArea=%d",A);
break;
case 2:P=2*(l+b);
printf("\nPerimeter=%d",P);
break;
case 3:D=sqrt(b*b+l*l);
printf("\nDiagonal=%f",D);
break;
default:printf("error");
break;
}
getch();
}


