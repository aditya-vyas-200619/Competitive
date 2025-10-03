#include <stdio.h>
int main()
{
    int n,i=0;
    printf("Enter the length of string: ");
    scanf("%d",&n);
    char str[n];
    printf("Enter a String: ");
    scanf("%s",str);
    printf("Before Reversing: %s\n",str);
    char rev[n];
    printf("After Reversing: ");
   while(n>=0)
   {
    printf("%c",str[n]);
    n--;
   } 

  
    return 0;
}