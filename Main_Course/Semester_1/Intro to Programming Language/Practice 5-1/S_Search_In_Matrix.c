#include <stdio.h>

int main()
{
    int n, m, x, flag = 1;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                flag = 0;
            }
        }
    }
    if (flag)
    {
        printf("will take number");
    }
    else
        printf("will not take number");
    return 0;
}