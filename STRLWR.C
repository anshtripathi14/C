#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch[20];
clrscr();
printf("Enter string\n");
gets(ch);
strlwr(ch);
printf("Lowercase=%s",ch);
getch();
}