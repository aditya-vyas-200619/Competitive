#include <stdio.h>
int power(int b, int e)
{
    int res = b;
    if(e==0)
    return 1;
    else if(e==1)
    return res;
    
    res = res * power(b,(e-1));
}
int main()
{
    int b,e;
    printf("Enter the value of base: ");
    scanf("%d",&b);
    printf("Enter the value of exponent: ");
    scanf("%d",&e);
    printf("%d raised to the power %d = %d",b,e,power(b,e));
}