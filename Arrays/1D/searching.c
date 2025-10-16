#include <stdio.h>
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    printf("Enter the no. you want to check: ");
    int n;
    scanf("%d",&n);

    for(int i=0;i<7;i++)
    {
        if(arr[i]==n)
        {
            printf("Number found!");
            break;
        }
    }
    return 0;
}