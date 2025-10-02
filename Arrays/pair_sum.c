#include <stdio.h>
int main()
{
    int n;
    int flag=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int x;
    printf("Enter the number: ");
    scanf("%d",&x);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        if(i!=j)   
        if(arr[i]+arr[j]==x) flag++;
        }
    }

    printf("Total pairs whose sum is equal to %d is %d.",x,flag/2);
    return 0;
}