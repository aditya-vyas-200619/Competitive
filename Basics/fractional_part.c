#include <stdio.h>

int main() {
    float a;
    printf("Enter a number with a fractional part:");
    scanf("%f", &a);
    float fractional_part = a - (int)a;
    printf("The fractional part is: %f", fractional_part);
    return 0;
}