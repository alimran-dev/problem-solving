#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    if (a <= 90)
        a += 32;
    else
        a -= 32;
    printf("%c", a);
    return 0;
}