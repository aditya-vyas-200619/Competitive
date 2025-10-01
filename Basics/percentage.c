#include <stdio.h>
int main() {
    float x1,x2,x3,x4,x5,percentage;
    x1 = 38;
    x2 = 39;
    x3 = 40;
    x4 = 40;
    x5 = 40;
    percentage = ((x1+x2+x3+x4+x5)/200)*100;
    printf("The percentage is: %f",percentage);
    return 0;
}