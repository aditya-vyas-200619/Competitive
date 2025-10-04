#include <stdio.h>
#include <string.h>
int main()
{
    int size=0,i=0;
    char str[40];
    printf("Enter your string: ");
    scanf("%[^\n]s",str);
    int x=0;
    while(str[i]!='\0')
    {
        size++;
        i++;
    }

    char rev[size];
    int c = size-1;
    while(c>=0)
    {
      char temp = str[c];
      str[c] = rev[x];
      rev[x] = temp;
      x++;
      c--;

    }
    puts(rev);
    return 0;
}