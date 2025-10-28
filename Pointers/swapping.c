#include <stdio.h>
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Value of x = %d\n",x);
    printf("Value of y = %d\n",y);
}
int main()
{
    int a = 5;
    int b = 6;
    swap(a,b);
    printf("Value of a = %d\n",a);
    printf("Value of b = %d\n",b);
    return 0;
}