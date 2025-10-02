#include <stdio.h>
int main()
{
    int arr[5];
    int sum = 0;
    printf("Enter the elements of array: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("Elements of this array are: ");
    for(int j=0;j<5;j++)
    {
        printf("%d \n",arr[j]);
    }
    printf("Sum of the elements = %d",sum);
    
    return 0;
}