#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("enter any number");
scanf("%d",&c);
if(c%2==0)
{ a=c*c;
printf("square of number=%d",a);
}
else
{ b=c*c*c;
printf("cube  of number=%d",b);
}
getch();
}
