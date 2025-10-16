#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The elements of array are: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }
    int max_index = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[max_index])
        { 
            max_index = i;
        }
    }

    printf("MAX ELEMENT: %d",arr[max_index]);
    return 0;
}


// #include <limits.h>
// #include <stdio.h>
// int main()
// {
//     int min = INT_MIN;
//     printf("%d",min);
// }