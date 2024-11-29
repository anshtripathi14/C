#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch1[20],ch2[20];
int res;
clrscr();
printf("Enter two strings\n");
gets(ch1);
gets(ch2);
res=strcmp(ch1,ch2);
if(res>0)
printf("first string is greater");
else
if(res<0)
printf("second string is greater");
else
printf("strings are equal");
getch();
}