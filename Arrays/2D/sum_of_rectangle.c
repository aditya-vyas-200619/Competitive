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
    int r1,r2,c1,c2;
    printf("Enter r1: ");
    scanf("%d",&r1);
    printf("Enter c1: ");
    scanf("%d",&c1);
    printf("Enter r2: ");
    scanf("%d",&r2);
    printf("Enter c2: ");
    scanf("%d",&c2);

    int sum = 0;

    for(int i=r1;i!=r2;i++)
    {
        for(int j=c1;j!=c2;j++)
        {
            sum+=arr[i][j];
        }
    }
    printf("\nSum = %d",sum);
    return 0;
}