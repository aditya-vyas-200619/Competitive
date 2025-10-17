#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter no. of rows: ");
    scanf("%d",&r);
    printf("Enter no. of columns: ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the elements of your matrix: ");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
          scanf("%d",&arr[i][j]);
        }
    }
    int arr2[c][r];
    printf("Original matrix: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
          printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of matrix: \n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
          arr2[i][j] = arr[j][i];
          printf("%d ",arr[j][i]);
        }
        printf("\n");
    }

    printf("New matrix: \n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
          printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}