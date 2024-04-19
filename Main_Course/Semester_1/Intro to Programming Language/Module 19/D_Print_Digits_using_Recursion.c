#include <stdio.h>

void digits(int n)
{
    if (n == 0)
        return;
    int a = n % 10;
    digits(n / 10);
    printf("%d ", a);
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if(n==0)
        {
            printf("%d", 0);
        }
        digits(n);
        printf("\n");
    }

    return 0;
}