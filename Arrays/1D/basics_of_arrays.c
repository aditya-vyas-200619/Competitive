#include <stdio.h>
int main()
{
    // int arr[5]= {1,2,3,4,5};
    // printf("%a",arr[1]);

    int arr[10];
    printf("Enter the elements of array: ");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&(arr[i]));
    }
    
    printf("The elements of array in reverse order are: \n");
    for(int i=10;i>0;i--)
    {
        printf("%d \n",arr[i]);
    }
    return 0;
}