#include <stdio.h>

int main()
{
    long long int n, m, k, total = 0;
    scanf("%lld %lld %lld", &n, &m, &k);
    if (k == 0 || n == 0)
    {
        printf("0");
        return 0;
    }
    if (n < m && n < k)
    {
        total = n;
        printf("%lld", total);
        return 0;
    }
    else if (k < m)
    {
        total = k;
        printf("%lld", total);
        return 0;
    }
    else
    {
        if (m > 0)
        {
            total = m;
            n -= m;
            k -= m;
            m -= m;
        }
    }
    if (n / 2 < k)
        total += n / 2;
    else
        total += k;
    printf("%lld", total);
    return 0;
}