#include<stdio.h>
#include<string.h>

int main()
{
    char a[20];
    fgets(a, 10, stdin);
    printf("%s", a);
    return 0;
}