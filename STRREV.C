#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch[20];
clrscr();
printf("Enter string\n");
gets(ch);
strrev(ch);
printf("Reversed string=%s",ch);
getch();
}