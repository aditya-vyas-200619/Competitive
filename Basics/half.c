#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    float half = num/2.0;
    printf("Half of the number is: %f", half);
    return 0;
}