#include <stdio.h>

void max(int *arr, int n, int i, int m)
{
    if (i == n)
    {
        printf("%d", m);
        return;
    }

    if (arr[i] > m)
    {
        m = arr[i];
    }
    max(arr, n, i + 1, m);
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max(arr, n, 0, arr[0]);
    return 0;
}