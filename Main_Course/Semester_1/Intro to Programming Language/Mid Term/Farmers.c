#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int m1, m2, d;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &m1, &m2, &d);
        int result = d - ((d * m1) / (m1 + m2));
        printf("%d\n", result);
    }
    return 0;
}