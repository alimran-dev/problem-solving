#include<stdio.h>

char capital_to_small(char x)
{
    if (x>='A'&&x<='Z')
    {
        x += 32;
    }
    return x;
}
int main()
{
    char a;
    scanf("%c", &a);
    char small = capital_to_small(a);
    printf("%c", small);
    return 0;
}