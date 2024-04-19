#include<stdio.h>

int main()
{
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            printf("%d ", i);
            break;
        }
        if (i==(n-1) && !(arr[i]==x))
        {
            printf("-1");
        }
        
    }
    
    return 0;
}
// accepted