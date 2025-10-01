// you have n stairs and you can climb one,two or three stairs at a time. Write a program to find number of ways in which you can reach nth stairs.
int stairs(int n)
{
    if((n==1)||(n==2))
    return n;
    else if(n==3)
    return 4;
    return (stairs(n-1)+stairs(n-2)+stairs(n-3));
}
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the no. of stairs: ");
    scanf("%d",&n);
    printf("No. of ways to climb stairs: %d",stairs(n));
    return 0;
}