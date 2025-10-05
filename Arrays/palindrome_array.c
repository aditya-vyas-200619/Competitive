#include <stdio.h>
int checkPalindrome(int arr[],int n)
{
    int i=0;
    int j=n/2;
    int flag=0;
    while(i<j)
    {
        if(arr[i]!=arr[n-1-i])
        flag++;
        i++;
    }
    return flag;
    
}
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int flag = 0;
    flag = checkPalindrome(arr,n);
    if(flag==0)
    printf("Palindrome");
    else
    printf("Not Palindrome");
    return 0;
}