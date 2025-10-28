#include <stdio.h>
void swap(int *x, int *y)
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
    int *x = &a;
    int *y = &b;
    swap(x,y);
    printf("Value of a = %d\n",a);
    printf("Value of b = %d\n",b);
}