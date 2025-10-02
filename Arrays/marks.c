#include <stdio.h>
int main()
{
    int arr[10];
    printf("Enter the marks of 10 students: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Roll Numbers having marks less than 35 are: \n");

    for(int i=0;i<10;i++)
    {
        if(arr[i]<35)
        printf("%d \n",i);
    }
    return 0;
}