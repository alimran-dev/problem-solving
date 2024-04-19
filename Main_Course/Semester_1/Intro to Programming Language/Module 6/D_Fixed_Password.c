#include <stdio.h>

int main()
{
    int x;
    while (1)
    {
        scanf("%d", &x);
        if (x == 1999)
        {
            printf("Correct\n");
            return 0;
        }
        printf("Wrong\n");
    }
    return 0;
}