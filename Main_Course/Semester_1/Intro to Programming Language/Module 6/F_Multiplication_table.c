#include <stdio.h>

int main()
{
    int n, mult;
    scanf("%d", &n);
    for (int i = 1; i <= 12; i++)
    {
        mult = n * i;
        printf("%d * %d = %d\n", n, i, mult);
    }
    return 0;
}