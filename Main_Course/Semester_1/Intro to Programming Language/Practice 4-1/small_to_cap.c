#include<stdio.h>


char small_to_cap(char x)
{
    if (x>='a'&&x<='z')
    {
        x -= 32;
    }
    else if (x>='A'&&x<='Z')
    {
        x += 32;
    }
    return x;
}
int main()
{
    char a;
    scanf("%c", &a);
    char cap = small_to_cap(a);
    printf("%c", cap);
    return 0;
}