#include <stdio.h>
int maze (int ir, int ic, int fr, int fc)
{
    int down_ways=0;
    int right_ways=0;
    int total_ways = 0;
    if((ir==fr)&&(ic==fc))
    {
        return 1;
    }
    else if(ir==fr)
    {
      right_ways+=maze(ir,ic+1,fr,fc);
    }
    else if(ic==fc)
    {
        down_ways+=maze(ir+1,ic,fr,fc);
    }
    else if ((ir<fr)&&(ic<fc))
    {
        right_ways+=maze(ir,ic+1,fr,fc);
        down_ways+=maze(ir+1,ic,fr,fc);
    }
    total_ways = right_ways+down_ways;
}
int main()
{
    int ir,ic,fr,fc;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&fr,&fc);
    int ways = maze(1,1,fr,fc);
    printf("From (%d,%d) to (%d,%d), no. of ways = %d",1,1,fr,fc,ways);
    return 0;
}