#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s", a);
   /*  int count = 0;
    for (int i = 0; a[i]!='\0'; i++)
    {
        count++;
    }
    printf("%d", count); */
    int stSize = strlen(a);
    printf("%d", stSize);
    return 0;
}