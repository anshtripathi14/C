#include<stdio.h>
extern int i=1;// it is available throughout the program
main()
{
    int i=3;// this is available only in main block
    printf("%d\n",i);
    fun();
}
fun()
{
    printf("%d",i);
}