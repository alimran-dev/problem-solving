#include <stdio.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", &a, &b);
    for (int i = 0; ; i++)
    {
        if (a[i]=='\0' && b[i]=='\0')
        {
            printf("Same");
            break;
        }
        else if (a[i]=='\0')
        {
            printf("A choto");
            break;
        }
        else if (b[i]=='\0')
        {
            printf("B choto");
            break;
        }

        if (a[i]==b[i])
        {
            continue;
        }
        else if (a[i]<b[i])
        {
            printf("A choto");
            break;
        }
        else
        {
            printf("B choto");
            break;
        }
    }
    
    return 0;
}