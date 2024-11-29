#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	float r,area;
	clrscr();
	printf("enter radius of the circle");
	scanf("%f",&r);
	area=3.14*(r*r);
	printf("area=%f",area);
	getch();
}
