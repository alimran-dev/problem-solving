#include<stdio.h>

int main()
{
    int n,s,k;
    scanf("%d", &n);
    s = n - 1;
    k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < s; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < k; i++)
        {
            printf("*");
        }
        printf("\n");
        s--;
        k++;
    }
    
    return 0;
}