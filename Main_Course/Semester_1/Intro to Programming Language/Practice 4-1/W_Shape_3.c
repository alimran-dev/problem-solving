#include <stdio.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = n - 1;
    k = 1;
    for (int i = 1; i <= 2 * n; i++)
    {
        for (int i = 1; i <= s; i++)
        {
            printf(" ");
        }
        for (int i = 1; i <= k; i++)
        {
            printf("*");
        }
        printf("\n");
        if (i < n)
        {
            s--;
            k += 2;
        }
        else if (i > n)
        {
            s++;
            k -= 2;
        }
    }

    return 0;
}