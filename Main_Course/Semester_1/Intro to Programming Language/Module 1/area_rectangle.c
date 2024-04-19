#include <stdio.h>
int main()
{
    int length, width, area;
    printf("Please input the length: ");
    scanf("%d",&length);
    printf("Please input the width: ");
    scanf("%d", &width);
    area = length * width;
    printf("The area is: %d", area);
    return 0;
}