#include <stdio.h>
#include <string.h>
int main()
{
    char str[]="Resonance";
    char *str2 = str;      //Shallow Copy.
    str[0]='N';
//    printf("%s",str);

    char s1[]="Resonance";   // deep copy.


    //You can also copy by:

    char s3[]="Good Morning.";
    char* s4;
    s4 = s3;
    s4 = "Good Afternoon";    // no change in s3.
    printf("%s \n %s",s3,s4);
    return 0;
}