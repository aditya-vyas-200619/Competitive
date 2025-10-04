// Another way of initialising string.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello Everyone";
    char* ptr = str; // ptr now points to str[0]
    printf("%p\n",&str[0]);
    printf("%p",str);

    while(*ptr!='\0')
    {
        printf("%c",*ptr);        // ptr --> stands for address.
        ptr++;                    // *ptr --> value fetch.   address can also ++.
    }


    char *ptr = "Physics Wallah";   // Note: Such direct initialisation using pointers results in a read-only memory allocation of character arrays and hence, causes undefined behaviour when we try to change the characters. ptr[O] = 'm'; Error!
    return 0;
}