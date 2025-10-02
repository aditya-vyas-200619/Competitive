#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter the elements of array: \n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("ADDRESSES\n");
    for(int i=0;i<5;i++)
    {
        printf("%d = %p\n",arr[i],&arr[i]);
    }
    return 0;
}