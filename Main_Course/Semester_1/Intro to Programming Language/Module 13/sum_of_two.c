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
    int x;
    scanf("%d", &x);
    int result = 0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            if (arr[i]+arr[j]==x)
            {
                result = 1;
            }
        }
        
    }
    if (result==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}