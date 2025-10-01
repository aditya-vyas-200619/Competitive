#include <stdio.h>

int main() {
    float radius, area;
    float pi = 22.0/7;
    printf("Enter the radius of the circle and press Enter to continue: ");
    scanf("%f",&radius);
    area = pi * radius * radius;
    printf("Enter the radius of the circle: %f",area);
    return 0;
}