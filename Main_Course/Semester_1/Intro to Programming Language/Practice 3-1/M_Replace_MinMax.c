#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0], minIdx = 0, max = arr[0], maxIdx = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minIdx = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            maxIdx = i;
        }
    }
    int tmp = min;
    arr[minIdx] = max;
    arr[maxIdx] = tmp;
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}