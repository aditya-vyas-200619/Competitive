#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    if((t>=1)&&(t<=10000))
    {
    int x[t];
    int y[t];
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&x[i],&y[i]);
    }
    int se=0;
    int so=0;
    for(int i=0;i<t;i++)
    {
        if(((x[i]>=1)&&(x[i]<=100))&&((y[i]>=1)&&(y[i]<=100)))
        {
        for(int j=x[i];j<=y[i];j++)
        {
            if(j%x[i]==0)
            {
                if(j%2==0) 
                se+=j;
                else 
                so+=j;
            }
        }
        printf("%d\n %d\n",se,so);
        if(se>=so) printf("YES\n");
        else printf("NO\n");
    }
    }
  }
}