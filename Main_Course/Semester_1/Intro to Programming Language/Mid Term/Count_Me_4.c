#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];
    scanf("%s", &s);
    int letters[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int idx = s[i] - 'a';
        letters[idx]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (letters[i] > 0)
        {
            printf("%c - %d\n", i + 'a', letters[i]);
        }
    }

    return 0;
}