#include <stdio.h>

int main()
{
    char a;
    scanf("%c", &a);
    if (a > 47 && a < 58)
    {
        printf("IS DIGIT");
    }
    else if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
    {
        printf("ALPHA\n");
        if (a >= 65 && a <= 90)
            printf("IS CAPITAL");
        else
            printf("IS SMALL");
    }
    return 0;
}