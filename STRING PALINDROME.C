#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch1[20],ch2[20],ch3[20];
clrscr();
printf("Enter any string\n");
gets(ch1);
strcpy(ch2,ch1);
strrev(ch1);
if(strcmp(ch1,ch2)==0)
printf("the strings are palindrome");
else
printf("the strings are not palindrome");
getch();
}