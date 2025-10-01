#include <stdio.h>
int main()
{
    int a = 5;
    int* x = &a; //int* -> int ka address store karta hai.
    int** y = &x;// int** -> int* ka address store karta hai (warnings nahi aati).
    printf("%p\n",&x);//%p se address print hota hai.
    printf("%p\n",y);
    printf("%d\n",*x);
    printf("%d\n",**y);

    // You can also try.
    int*** z = &y;
    printf("%d\n",***z);
    return 0;
}