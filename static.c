#include<stdio.h>
main()
{
    inc();
    inc();
    inc();
}
inc()
{
    static int i=1;
    printf("%d\n",i);
    i++;
}