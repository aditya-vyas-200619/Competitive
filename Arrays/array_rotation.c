// Memorise this logic!!

#include <stdio.h>
void reverse(int arr[],int si, int ei)
{
    for(int i=si,j=ei;i<j;i++,j--)
    {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        
    }
    return;
}
int main()
{
    int n;
    int x;
    printf("Enter the size of your array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of your array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Till what steps you want to rotate? ");
    scanf("%d",&x);
    printf("ARRAY BEFORE ROTATION: \n");
    for(int i=0;i<n;i++)
    {
      printf("%d ",arr[i]);
    }
    reverse(arr,0,n-1);
    reverse(arr,0,x-1);
    reverse(arr,x,n-1);
    printf("\nARRAY AFTER ROTATION: \n");
    for(int i=0;i<n;i++)
    {
      printf("%d ",arr[i]);
    }
}