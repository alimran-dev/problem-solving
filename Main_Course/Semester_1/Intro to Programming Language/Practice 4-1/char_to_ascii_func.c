#include<stdio.h>

int char_to_ascii(char x)
{
    int y = x;
    return y;
}
int main()
{
    char a;
    scanf("%c", &a);
    int ascii=char_to_ascii(a);
    printf("%d", ascii);
    return 0;
}