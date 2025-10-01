#include <stdio.h>
void swap(int* x,int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 5;
    int b = 6;
    printf("BEFORE SWAPPING: \n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    swap(&a,&b);
    printf("AFTER SWAPPING: \n");
    printf("a = %d\n",a);
    printf("b = %d",b);
    return 0;
}