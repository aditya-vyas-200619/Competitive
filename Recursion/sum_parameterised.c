#include <stdio.h>
int sum(int a, int b)
{
    int s = 0;
    if(a>b)
    return s;
    s = a + sum(a+1,b);
}
int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("The sum of first n natural numbers is: %d",sum(1,n));
    return 0;
}