#include<stdio.h>
#include<string.h>

void fun(char p[])
{
    printf("%c\n", *p);
    printf("%d ",strlen(p));
}
int main()
{
    char a[] = "hello";
    fun(a);
    return 0;
}