#include <stdio.h>
int isPrime(int x)
{
    int flag = 0;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            flag++;
        }
    }
    if(flag!=0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int primeFactors(int n)
{
    printf("Prime Factors of this number are: \n");
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(isPrime(i))
            {
                printf("%d\n",i);
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the number you want to check: ");
    scanf("%d",&n);
    primeFactors(n);
    return 0;
}

