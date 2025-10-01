#include <stdio.h>
void print(int n)
{
    if(n==1)
    printf("%d\n",n);
    else
    {
     printf("%d\n",n);
     print(n-1);
    }
}
int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    print(n);
    return 0;
}