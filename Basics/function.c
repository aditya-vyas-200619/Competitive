#include <stdio.h>
int factorial(int x)
{
  int fact = 1;
  for(int i = x; i>=1;i--)
    {
      fact = fact * i;
    }
  return fact;
}

int cal(int n, int r)
{
  int res =1;
  res = factorial(n)/((factorial(r))*(factorial(n-r)));
  return res;
}

int main()
{
  int n;
  printf("Enter the number of levels: ");
  scanf("%d",&n);

  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n-i;j++)
    {
        printf(" ");
    }
    for(int j=1;j<=i;j++)
    {
        printf("%d ",cal(i-1,j-1));
    }
    
    
    printf("\n");
  }
  return 0;
}