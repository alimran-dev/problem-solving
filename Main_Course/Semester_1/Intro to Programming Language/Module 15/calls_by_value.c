#include<stdio.h>


void fun(int x)
{
    x = 200;
    printf("from fun : %d\n",x);
}
int main()
{
    int x = 100;
    fun(x);
    printf("from main : %d", x);
    return 0;
}