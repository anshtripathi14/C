#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,z;
float A;
float average(int,int,int);//function prototype
clrscr();
printf("enter the number\n");
scanf("%d%d%d",&x,&y,&z);
A=average(x,y,z);//function calling
printf("average=%f",A);
getch();
}
float average(int x,int y,int z)//function definition
{
float A;
A=(x+y+z)/3.0;
return(A);
}
