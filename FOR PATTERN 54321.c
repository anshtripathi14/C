#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		printf("\n");
		for(j=5;j>=i;j--)
		{
			printf("\t%d",j);
		}
	}
	getch();
}
