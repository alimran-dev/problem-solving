#include <stdio.h>

int main()
{
    int n, pr = 0, sc = 0;
    scanf("%d", &n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                pr += arr[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                sc += arr[i][j];
            }
        }
    }
    int dif = pr - sc;
    if (dif < 0)
    {
        dif *= -1;
    }
    printf("%d", dif);
    return 0;
}