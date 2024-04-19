#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        long long int m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);
        double d = m * 1.0 / (a * b * c) * 1.0;
        long long int ans = d;
        if (d >= 0 && d == ans)
        {
            printf("%lld\n", ans);
        }
        else
            printf("%d\n", -1);
    }

    return 0;
}