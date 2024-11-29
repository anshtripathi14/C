#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int e,a,b;
int result (int,int);
clrscr();
printf("Enter the base\n");
scanf("%d",&a);
printf("Enter the exponent\n");
scanf("%d",&b);
e=result(a,b);
printf("Result=%d",e);
getch();
}
int result (int a,int b)
{
int e;
if(b==0)
return(1);
else
return(pow(a,b));
}
