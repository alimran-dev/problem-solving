#include <stdio.h>

int main()
{
    int n, a, quotient, check;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        quotient = 1;
        check = 1;
        for (int i = 1; !check == 0; i *= 10)
        {
            quotient = a / i;
            int remainder = quotient % 10;
            printf("%d ", remainder);
            check = a / (i * 10);
        }
        printf("\n");
    }

    return 0;
}