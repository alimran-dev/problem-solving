#include <stdio.h>

int main()
{
    int n, x, t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int A[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }
        scanf("%d", &x);
        for (int i = 0; i < n; i++)
        {
            if (A[i] == x)
            {
                printf("YES\n");
                break;
            }
            if (i == n - 1 && A[i] != x)
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}