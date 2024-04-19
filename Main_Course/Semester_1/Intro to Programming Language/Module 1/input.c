#include <stdio.h>

int main()
{
    int a;
    float b;
    char z;
    scanf("%d", &a);
    scanf("%f", &b);
    scanf(" %c", &z);
    printf("%d\n", a);
    printf("%0.2f\n", b);
    printf("%c", z);
    return 0;
}