#include <stdio.h>
void func(int arr[])
{
    int a = arr[0]+arr[1];
    arr[0] = a - arr[0];
    arr[1] = a - arr[0]; 
}
int main()
{
    int arr[2]={5,6};
    printf("%d %d \n",arr[0],arr[1]);
    func(arr);
    printf("%d %d \n",arr[0],arr[1]);
    return 0;
}

//   Address of an array is the address of the first element of the array.
//   When you pass an array as an argument to a function, address of the first element of the array gets actually passed. 