#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int e,a,b;
int result (int,int);//function prototype
clrscr();
printf("Enter the base\n");
scanf("%d",&a);
printf("Enter the exponent\n");
scanf("%d",&b);
e=result(a,b);//function calling
printf("Result=%d",e);
getch();
}
int result (int a,int b)//function definition
{
int e;
e=pow(a,b);
return(e);
}
