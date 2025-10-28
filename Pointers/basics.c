// #include <stdio.h>
// int main()
// {
//     int i = 5;
//     printf("The address of i is: %u\n",&i);
//     printf("Value of i = %u",i);
//     return 0;
// }

//////////////////////////////////

// #include <stdio.h>
// int main()
// {
//     int i=3;
//     printf("The address of i = %u\n",&i);
//     printf("Value of i = %u\n",i);
//     printf("Value of i = %u",*(&i));
// }

// #include <stdio.h>
// int main()
// {
//     int i=3;
//     int *j;
//     j = &i;
//     printf("Address of i = %u\n",&i);
//     printf("Address of i = %u\n",j);
//     printf("Address of j = %u\n",&j);
//     printf("Value of j = %d\n",j);
//     printf("Value of i = %d\n",i);
//     printf("Value of i = %d\n",*(&i));
//     printf("Value of i = %d\n",*j);
//     return 0;
// }


#include <stdio.h>
int main()
{
    char c;
    char *cc;
    int i;
    int *ii;
    float a;
    float *aa;

    c = 'A';
    i = 54;
    a = 3.14;
    cc = &c;
    ii = &i;
    aa = &a;

    printf("Address contained in cc = %u\n",cc);
    printf("Address contained in ii = %u\n",ii);
    printf("Address contained in aa = %u\n",aa);
    printf("Value of c = %c\n",*cc);
    printf("Value of i = %d\n",*ii);
    printf("Value of a = %f\n",*aa);

    return 0;
}