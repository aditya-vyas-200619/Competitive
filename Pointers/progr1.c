#include <stdio.h>
int main()
{
    int i = 54;
    float a = 3.14;
    char *ii, *aa;
    ii = (char*)&i;
    aa = (char*)&a;
    printf("Address contained in ii = %u\n",ii);
    printf("Address contained in aa = %u\n",aa);
    printf("Value of i = %d\n",*ii);
    printf("Value of a = %d\n",*aa);
}