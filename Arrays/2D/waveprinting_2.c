#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the elements of array: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        if(j%2==0)
        {
            printf("%d ",arr[i][j]);
        }
        else
        {
          printf("%d ",arr[i][j+n-1]);
        }
      }
      printf("\n");   
    }
    
    return 0;
}