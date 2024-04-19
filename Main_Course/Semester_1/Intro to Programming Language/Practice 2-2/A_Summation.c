#include <stdio.h>

int main()
{
    int n;
    long long int total = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    if(total<0)
        total *= (-1);
    printf("%lld", total);
    return 0;
}