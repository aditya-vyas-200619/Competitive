#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two integers a and b such that a > b: ");
    scanf("%d %d", &a, &b);
    int c;
    c = a-(b*(a/b));
    printf("The remainder of %d divided by %d is: %d", a, b, c);
    return 0;
}