#include <stdio.h>    // size of string = no. of characters + 1
int main()
{
    int i=0;
    char arr[] = "College Wallah is the best coding channel!\0";
    while(arr[i]!=0)
    {
    printf("%c",arr[i]);
    i++;
    }
    return 0;
}