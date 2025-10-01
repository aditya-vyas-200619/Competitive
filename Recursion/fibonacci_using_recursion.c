#include <stdio.h>
int fibo(int n)
{
    if ((n==1)||(n==2)) return 1;
    return (fibo(n-1)+fibo(n-2));
}
int main()
{
    int n;
    printf("Enter the term number: ");
    scanf("%d",&n);
    printf("%dth Term: %d",n,fibo(n));
    return 0;
}