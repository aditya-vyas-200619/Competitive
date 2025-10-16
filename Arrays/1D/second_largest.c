#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    int max=0,smax=0;

    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(arr[max]<arr[i])
        {
            smax = max;
            max = i;
        }
        else if((arr[smax]<arr[i])&&(arr[smax]!=arr[max]))
        {
            smax = i;
        }
    }

    printf("MAXIMUM INDICE: %d\n",max);
    printf("SECOND MAXIMUM INDICE: %d",smax);
    return 0;
}

// difficult to understand. refer video and keep practising dry run! You'll ace it someday!!!