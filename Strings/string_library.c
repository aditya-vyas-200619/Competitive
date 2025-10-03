#include <stdio.h>
#include <string.h>
int main()
{
    // char ch[]="C is closer to computer hardware";
    // puts(ch); 
    // puts("It also works like this!");

    // TAKING STRING AS INPUT
    char ch[40];
    scanf("%s",ch);   // no need to write '&' here.
    printf("HI! %s",ch);
    return 0;
}