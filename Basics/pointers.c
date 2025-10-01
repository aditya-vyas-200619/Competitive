#include <stdio.h>
int main()
{
     int a = 5;
    // int b = 5;
    // printf("%p\n",&a);
    // printf("%p",&b); //%p is used to print address.

    // int* x = &a;  //variable that stores address. It also has an address of its own.
    // printf("%p\n",x); 
    // printf("%p\n",&x);

    // printf("%d\n",*x); 

    int *x = &a;
    *x = 9;
    printf("%d\n",a); // with the help of pointer we can change the value of a variable whose address is the only knownn to us. 
    return 0;
}