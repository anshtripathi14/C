#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch1[20],ch2[20];
clrscr();
printf("Enter string\n");
gets(ch1);
strcpy(ch2,ch1);
printf("Copied string=%s",ch2);
getch();
}