#include <stdio.h>
#include <stdbool.h>
int main()
{
    int arr[15]={1,1,3,4,5,6,7,6,5,4,3,2,1};
    
    printf("Unique Element: ");
    for(int i=0;i<15;i++)
    {
        bool flag = false;
        for(int j=i+1;j<15;j++)
        {
            if(arr[i]==arr[j])
            {
            flag = true;
            }
        }
        if(flag==false)
        {
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}