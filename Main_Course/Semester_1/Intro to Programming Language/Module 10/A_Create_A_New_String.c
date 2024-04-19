#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001],t[1001];
    scanf("%s %s", &s, &t);
    int sizeOfS = strlen(s);
    int sizeOfT = strlen(t);
    printf("%d %d\n", sizeOfS, sizeOfT);
    printf("%s %s", s, t);
    return 0;
}