#include <stdio.h>
#include <string.h>

long long int is_palindrome(char s[])
{
    int result = 1;
    int i = 0, j = strlen(s) - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            result = 0;
        }
        i++;
        j--;
    }
    return result;
}
int main()
{
    char s[1001];
    scanf("%s", &s);
    int result = is_palindrome(s);
    if (result == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}