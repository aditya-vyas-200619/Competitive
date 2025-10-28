#include <stdio.h>
#include <string.h>
int main()
{
    struct book
    {
        char name[100];
        float price;
        int pages;
    } a,b,c;
    
    a.price = 411.5;
    a.pages = 400;
    strcpy(a.name,"Secret Seven");

    printf("%s\n",a.name);
    printf("%f\n",a.price);
    printf("%d\n",a.pages);

    strcpy(b.name,"Famous Five");
    b.price = 610.5;
    b.pages = 650;
    
    printf("%s\n",b.name);
    printf("%f\n",b.price);
    printf("%d\n",b.pages);
    return 0;
}