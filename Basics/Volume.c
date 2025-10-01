#include <stdio.h>
#include <math.h>

int main() {
    float a,b,radius,volume;
    a = 4.0/3;
    b = 22.0/7;
    radius = 5;
    volume = a*b*(pow(radius,3));

    printf("Volume of the sphere is: %f", volume);
    return 0;
}