#include <stdio.h>
int gcdf(int n, int m)
{
    int gcd = 1;
    int flag =0;
    if(n<m)
    {
        for(int i=n;i>=1;i--)
        {
          if((n%i==0)&&(m%i==0))
          {
            flag++;
            return i;
          }
        }
    }
    else if(m<n)
    {
     for(int i=m;i>=1;i--)
        {
          if((n%i==0)&&(m%i==0))
          {
            flag++;
            return i;
        }
    }
}
    else
    {
      for(int i=m;i>=1;i--)
        {
          if((n%i==0)&&(m%i==0))
          {
            flag++;
            return i;
          }
        }
    }
}
int main()
{
    int n,m;
    printf("Enter first number: ");
    scanf("%d",&n);
    printf("Enter second number: ");
    scanf("%d",&m);

    int gcd;
    gcd = gcdf(n,m);
    printf("The GCD of %d and %d is %d",n,m,gcd);
    return 0;
}