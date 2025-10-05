#include <stdio.h>
int main()
{
    int arr[10]= {1,2,3,5,4,5,6,7,8,9};
    int flag = 0;
    printf("Duplicate Element: ");
    int i=0;
    while(i<10)
    {
        int x = arr[i];
        for(int j=i+1;j<10;j++)
        {
            if(arr[j]==x)
            printf("%d",x);
        }
        i++;
    }
}