#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,d,x,y;
clrscr();
printf("enter value of a,b,c\n");
scanf("%f%f%f",&a,&b,&c);
d=b*b-4*a*c;
if(d>0)
{
x=(-b+sqrt(d))/(2.0*a);
y=(-b-sqrt(d))/(2.0*a);
printf("the roots are real and unequal\n");
printf("%f\n",x);
printf("%f\n",y);
}
else
if(d==0)
{
x=-b/(2.0*a);
y=-b/(2.0*a);
printf("the roots are real and equal\n");
printf("%f\n",x);
printf("%f\n",y);
}
else
printf("the roots are imaginary");
getch();
}




