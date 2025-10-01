#include <stdio.h>
void fibonaci(int n)
{
  int a = 0;
  int b = 1;
  int c;
  if(n == 0)
  printf("");
  else if(n == 1)
  printf("%d ",a);
  else if(n == 2)
  printf("%d %d ",a,b);
  else
  {
    int m = n-2;
    printf("%d %d ",a,b);
    while(m>0)
    {
      printf("%d ",(a+b));
      int temp;
      temp = a;
      a = b;
      b = temp+b;
      m--;
      temp = 0;
    }
  }
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    fibonaci(n);
}