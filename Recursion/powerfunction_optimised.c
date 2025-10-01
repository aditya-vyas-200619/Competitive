#include <stdio.h>
int power(int b, int e)
{
    int power_res = 1;
    if(e==0)
    return 1;
    else if(e==1)
    return b;
    else if (e%2==0)
    {
    int x = power(b,e/2);
    power_res = x * x;
    }
    else 
    {
    int x = power(b,(e-1)/2);
    power_res = x*x*b;
    }
    return power_res;
}
int main()
{
    int b,e;
    printf("Enter base: ");
    scanf("%d",&b);
    printf("Enter exponents: ");
    scanf("%d",&e);
    printf("%d raised to the power %d = %d",b,e,power(b,e));
    return 0;
}