#include <stdio.h>
void areaperi(int r, float *a, float *p)
{
    *a = 3.14 * r * r;
    *p = 2*3.14*r;
}
int main()
{
    int radius;
    float area, perimeter;

    printf("Enter radius of circle: \n");
    scanf("%d",&radius);
    areaperi(radius, &area,&perimeter);
    printf("Area of circle: %f\n",area);
    printf("Perimeter of circle: %f\n",perimeter);
    return 0;
}