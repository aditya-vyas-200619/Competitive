#include <stdio.h>
int maze2(int n,int m)
{
    int right_ways =0;
    int down_ways =0;
    int total_ways;
    if((n==1)&&(m==1))
    {
        return 1;
    }
    else if(n==1)
    {
      right_ways+=maze2(n,m-1);
    }
    else if(m==1)
    {
        down_ways+=maze2(n-1,m);
    }
    else if((n>1)&&(m>1))
    {
        right_ways+=maze2(n,m-1);
        down_ways+=maze2(n-1,m);
    }
    total_ways = right_ways+down_ways;
    return total_ways;
}
int main()
{
    int n,m;
    printf("Enter the no. of rows: ");
    scanf("%d",&n);
    printf("Enter the no. of columns: ");
    scanf("%d",&m);
    int ways = maze2(n,m);
    printf("From (%d,%d) to (%d,%d), no. of ways = %d",1,1,n,m,ways);
    return 0;
}