#include <stdio.h>

int *fun()
{
    static int i = 20;
    return(&i);
}
int main()
{
    int *p;
    p = fun();
    printf("%u\n",p);
    printf("%d\n",*p);
    return 0;
}