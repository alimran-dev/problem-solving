#include <stdio.h>

long long int sum(int a, int b)
{
    long long int c = a + b;
    return c;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    long long int result = sum(a, b);
    printf("%lld", result);
    return 0;
}