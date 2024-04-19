#include <stdio.h>

int main()
{
    int n;
    long long int sumPos = 0, sumNeg = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            sumPos += arr[i];
        }
        else if (arr[i] < 0)
        {
            sumNeg += arr[i];
        }
    }
    printf("%lld %lld", sumPos, sumNeg);
    return 0;
}