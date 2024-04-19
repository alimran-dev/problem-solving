#include <stdio.h>

long long int fun(int arr[], int n, int i)
{
    if (i == n)
        return 0;
    long long int sum = fun(arr, n, i + 1);
    return sum + arr[i];
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
    long long int sum = fun(arr, n, 0);
    printf("%lld", sum);
    return 0;
}