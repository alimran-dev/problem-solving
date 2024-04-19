#include <stdio.h>

int vowels(char *s, int i)
{
    if (s[i] == '\0')
        return 0;
    int total = vowels(s, i + 1);
    if (s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u')
    {
        return total + 1;
    }
    else
    {
        return total;
    }
}
int main()
{
    char s[201];
    fgets(s, 201, stdin);
    int total = vowels(s, 0);
    printf("%d", total);
    return 0;
}