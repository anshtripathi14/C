#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("series of odd numbers between 1-50 given below\n\n");
for(n=1;n<=50;n+=2)
{
printf("%d\t",n);
}
getch();
}