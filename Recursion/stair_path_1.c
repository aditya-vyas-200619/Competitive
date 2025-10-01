// you have n stairs and you can climb one or two stairs at a time. Write a program to find number of ways in which you can reach nth stairs.
int stair(int n)
{
    int total_ways;
    if((n==1)||(n==2))
    return n;
    total_ways = stair(n-1)+stair(n-2);
    return total_ways;
}
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d",&n);
    printf("No. of ways to climb stairs: %d",stair(n));
    return 0;
}