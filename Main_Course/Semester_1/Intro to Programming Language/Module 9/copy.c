#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int ans[n + m];
    for (int i = 0; i < n; i++)
    {
        ans[i] = arr[i];
    }
    int i = n;
    for (int j = 0; j < m; j++)
    {
        ans[i] = arr2[j];
        i++;
    }
    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", ans[i]);
    }
    return 0;
}