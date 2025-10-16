#include <stdio.h>
int main()
{
    int sum_even = 0;
    int sum_odd = 0;
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i%2==0) sum_even+=arr[i];
        else sum_odd+=arr[i];
    }
   printf("Difference of sum of elements at even indices and odd indices: %d",(sum_even - sum_odd));
   return 0;
}