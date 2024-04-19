#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int L1 = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>L1)
            L1 = arr[i];
    }
    int L2 = -1e9;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]<L1 && arr[i]>L2)
            L2 = arr[i];
    }
    
    printf("First Largest: %d\n", L1);
    printf("Second Largest: %d\n", L2);
    return 0;
}