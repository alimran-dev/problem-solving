#include<stdio.h>

int count_odd(int *arr,int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2!=0)
        {
            count++;
        }
    }
    return count;
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
    int result = count_odd(arr,n);
    printf("%d", result);
    return 0;
}