#include<stdio.h>

int main()
{
    int n,k;
    scanf("%d", &n);
    k = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <=k; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
        k++;
    }
    
    return 0;
}