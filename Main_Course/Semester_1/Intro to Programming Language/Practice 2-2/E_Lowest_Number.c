#include<stdio.h>

int main()
{
    int n,l=1;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i]<arr[l])
        {
            l = i;
        }
    }
    printf("%d %d", arr[l], l);
    return 0;
}
// Accepted