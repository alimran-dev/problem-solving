#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int b = a / 1000;
    if (b % 2 == 0)
        printf("EVEN");
    else
        printf("ODD");
    return 0;
}