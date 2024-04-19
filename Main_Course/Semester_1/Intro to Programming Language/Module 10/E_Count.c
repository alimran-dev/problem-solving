#include<stdio.h>

int main()
{
    char a[1000001];
    scanf("%s", a);
    int sum=0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        int n = a[i] - 48;
        sum += n;
    }
    printf("%d", sum);
    return 0;
}