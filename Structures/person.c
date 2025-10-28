#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int n)
{
    int temp = 0;
    while(n>0)
    {
        temp = temp*10 + n%10;
        n/=10;
    }

    if(temp == n) return true;
    else return false;
}
int main()
{
    int n;
    printf("x = ");
    scanf("%d",&n);
    bool x = isPalindrome(n);
    printf("%s",x?"true":"false");
    return 0;
}