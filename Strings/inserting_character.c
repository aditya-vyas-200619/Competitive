#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "College";
    printf("Enter the character you want to insert: ");
    char ch;
    scanf("%c",&ch);
    printf("Enter the position: ");
    int x;
    scanf("%d",&x);
    for(int i = strlen(str); i>=x;i--)
    {
      str[i+1]=str[i];
    }
    str[x]=ch;
    printf("%s",str);
    return 0;
}