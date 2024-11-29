#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch1[20],ch2[20],ch3[20];
clrscr();
printf("Enter first strings\n");
gets(ch1);
printf("Enter second strings\n");
gets(ch2);
printf("Enter third strings\n");
gets(ch3);
strcat(ch1,ch3);
strcat(ch2,ch3);
printf("Merged=%s\n",ch1);
printf("Merged=%s",ch2);
getch();
}