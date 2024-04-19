#include<stdio.h>

int main()
{
    // char a[6] = {'I', 'm', 'r', 'a', 'n'};
    char a[6] = "Imran";
    /* for (int i = 0; i < 5; i++)
    {
        printf("%c", a[i]);
    } */
    printf("%s", a);
    printf("\n%d", sizeof(a));

    return 0;
}