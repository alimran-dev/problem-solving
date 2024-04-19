#include <stdio.h>
#include <string.h>

int main()
{
    char s[100001];
    int cons = 0;
    scanf("%s", &s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            continue;
        }
        cons++;
    }
    printf("%d", cons);
    return 0;
}