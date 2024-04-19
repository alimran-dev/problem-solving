#include<stdio.h>
int main()
{
    int radius, area, circum;
    printf("Please input the radius of the circle: ");
    scanf("%d", &radius);
    area = 3.1416 * radius * radius;
    circum = 2 * 3.1416 * radius;
    printf("The area is: %d\n", area);
    printf("The circumference is: %d", circum);
    return 0;
}