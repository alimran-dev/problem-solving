#include<stdio.h>


void fun(int *p)
{
    printf("%d\n", *p);
    *p = 200;
}
int main()
{
    int x = 100;
    fun(&x);
    printf("from main: %d", x);
    return 0;
}