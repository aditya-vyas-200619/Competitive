#include <stdio.h>
int main()
{
    int n,x;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the elements of array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the number: ");
    scanf("%d",&x);
    int flag =0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
              if(arr[i]+arr[j]+arr[k]==x) flag++;
            }
        }
    }
    printf("Number of triplets: %d",flag);
    return 0;
}