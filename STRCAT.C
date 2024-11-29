#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch1[20],ch2[20];
clrscr();
printf("Enter two strings\n");
gets(ch1);
gets(ch2);
strcat(ch1,ch2);
printf("Merged string=%s",ch1);
getch();
}