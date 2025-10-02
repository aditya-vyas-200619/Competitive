#include <stdio.h>
int main()
{
    int n, x;
    int flag = 0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("Enter the number: \n");
    scanf("%d",&x);

    for(int i=0;i<n;i++)
    {
      if(arr[i]>x) flag++;
    }

    printf("No. of elements greater than %d = %d",x,flag);
    return 0;
}