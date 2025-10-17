#include <stdio.h>
int main()
{
    int n;
    int temp = 0;
    int flag = 0;
    printf("Enter the size of matrix: ");
    scanf("%d",&n);
    int arr[n][n];
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
    printf("Transpose matrix: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
           temp = arr[i][j];
           arr[i][j] = arr[j][i];
           arr[j][i] = temp;      
        
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
}