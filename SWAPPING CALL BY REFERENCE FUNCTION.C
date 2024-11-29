#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
void swap (int *,int *);
clrscr();
printf("Enter two values\n");
scanf("%d%d",&a,&b);
printf("\nBefore swapping\n");
printf("a=%d\tb=%d",a,b);
swap (&a,&b);
printf("\nAfter swapping\n");
printf("a=%d\tb=%d",a,b);
getch();
}
void swap (int *a,int *b)
{
int t;
t=*a;
*a=*b;
*b=t;
}
