#include <stdio.h>
void func(int arr[])  // no need to mention size.
{
    arr[0]=10;
}
int main()
{
    int arr[5]={1,5,6,7,8};
    printf("%d \n",arr[0]);
    func(arr);
    printf("%d \n",arr[0]);
    return 0;
}