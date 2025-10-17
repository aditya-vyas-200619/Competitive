#include <stdio.h>
int main()
{
    int n;
    int temp;
    int fl;
    printf("Enter the size of matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the elements of matrix: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Original matrix: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("After rotation by 90 degrees: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
          temp = arr[i][j];
          arr[i][j] = arr[j][i];
          arr[j][i] = temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        int j=0;
        fl = arr[i][j];
        arr[i][j] = arr[i][j+n-1];
        arr[i][j+n-1] = fl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
       printf("\n");
    }
    return 0;
}