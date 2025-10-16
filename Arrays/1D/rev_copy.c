#include <stdio.h>
int main()
{
    int n;
    int x=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int rev_copy[n];
    int m=n-1;
    while(m>=0)
    {
        rev_copy[m]=arr[x];
        m--;
        x++;
    }
    printf("ORIGINAL ARRAY: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n NEW ARRAY: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",rev_copy[i]);
    }
    return 0;
}