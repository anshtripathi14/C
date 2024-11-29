#include<stdio.h>
#include<conio.h>
void main()
{
char Three_planets[3][8]={"Mercury","Venus","Earth"};
int i;
clrscr();
for(i=0;i<=2;i++)
{
printf("%s\n",Three_planets[i]);
}
getch();
}