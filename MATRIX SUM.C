#include<stdio.h>
#include<conio.h>
void main()
{
int A[3][3],B[3][3],C[3][3],i,j;
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Enter value of A= ");
scanf("%d",&A[i][j]);
}}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Enter value of B= ");
scanf("%d",&B[i][j]);
}}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
C[i][j]=A[i][j]+B[i][j];
}}
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
{
printf("\t%d",C[i][j]);
}}
getch();
}
