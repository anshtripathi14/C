#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch[20];
int l;
clrscr();
printf("Enter string\n");
gets(ch);
l=strlen(ch);
printf("Length=%d",l);
getch();
}
