#include <stdio.h>
int main()
{
    int a,b;
    int arr[a][b];
    printf("Enter no. of rows: ");
    scanf("%d",&a);
    printf("Enter no. of columns: ");
    scanf("%d",&b);

    printf("Enter the elements of array: ");
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",arr[i][j]);
        }
    }
    int sum = 0;
    int max = 0;
    int rmax = 0;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            sum += arr[i][j];
        }
        if(sum>max)
        { 
          max = sum;
          rmax = i;
        }    
    }
    printf("Row having maximum sum = %d",rmax);
    return 0;
}