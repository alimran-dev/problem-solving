#include<stdio.h>
#include<stdlib.h>

int my_abs(int a)
{
    int b = abs(a);
    return b;
}
int main()
{
    int a;
    scanf("%d", &a);
    int abs= my_abs(a);
    printf("%d", abs);
    return 0;
}