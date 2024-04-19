#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, tg = 0, pt = 0;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", &s);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
            {
                tg++;
            }
            else if (s[i] == 'P')
            {
                pt++;
            }
        }
        if (tg > pt)
        {
            printf("Tiger\n");
        }
        else if (tg < pt)
        {
            printf("Pathaan\n");
        }
        else
            printf("Draw\n");
    }

    return 0;
}