#include <stdio.h>
#include <math.h>

int main()
{
    int n, l, s, k;
    scanf("%d", &n);
    l = 5 + ceil(n * 1.0 / 2);
    s = l - 1;
    k = 1;
    for (int i = 0; i < l; i++)
    {
        for (int i = 0; i < s; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < k; i++)
        {
            printf("*");
        }
        printf("\n");
        s--;
        k += 2;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < 5; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}