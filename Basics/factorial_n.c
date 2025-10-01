#include <stdio.h>

int factorial(int n)
{
    int fact_res = 1;
    for(int i = n; i>=1;i--)
    {
        fact_res = fact_res * i;
    }
    return fact_res;
}

void fact_print(int n)
{
    for(int i=1;i<=n;i++)
    {
        printf("%d ! = %d\n",i,factorial(i));
    }
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    fact_print(n);
    return 0;
}