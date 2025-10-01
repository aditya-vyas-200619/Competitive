#include <stdio.h>

void increasing(int n)
{
    if (n==0)
    return;
    printf("%d \n",n);
    increasing(n-1);
}
void decreasing(int n)
{
    if (n==0)
    return;
    decreasing(n-1);
    printf("%d \n",n);
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    increasing(n);
    decreasing(n);
    return 0;
}