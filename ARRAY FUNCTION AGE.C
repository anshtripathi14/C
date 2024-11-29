#include<stdio.h>
#include<conio.h>
int display (int age)
{
printf("%d",age);
return(0);
}
int main()
{
int agearray[3]={2,3,9},age;
clrscr();
display(agearray[1]);
getch();
return(0);
}