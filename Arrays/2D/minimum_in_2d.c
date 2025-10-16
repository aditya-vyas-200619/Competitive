#include <stdio.h>
int main()
{
    int r,c;
    printf("Enter no. of rows: ");
    scanf("%d",&r);
    printf("Enter no. of columns: ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the elements of array: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int min = arr[0][0];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]<min)
            min = arr[i][j];
        }
    }

    printf("Minimum: %d\n",min);
    printf("Index: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]==min)
            printf("(%d,%d)",i,j);
        }
    }
    return 0;
}