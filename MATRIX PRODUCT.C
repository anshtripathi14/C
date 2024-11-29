#include<stdio.h>
#include<conio.h>
void main()
{
int r1,c1,r2,c2,i,j,k;
int A[10][10],B[10][10],P[10][10];
clrscr();
printf("Enter the order of matrix A: ");
scanf("%d%d", & r1, & c1);
printf("Enter the order of matrix B: ");
scanf("%d%d", & r2, & c2);
if(c1!=r2)
{
printf("Matrices cannot be multiplied\n");
}
else
{
printf("\nEnter the elements of Matrix A:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&A[i][j]);
}
}
printf("\nEnter the elements of Matrix B:\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&B[i][j]);
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
P[i][j]=0;
for(k=0;k<r2;k++)
{
P[i][j]=P[i][j]+(A[i][k]*B[k][j]);
}
}
}
printf("\nResultant Matrix P:\n");
for(i=0;i<r1;i++)
{
for(j=0;j< c2;j++)
{
printf("%d\t",P[i][j]);
}
printf("\n");
}
}
getch();
}
