#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n%3==0)
    {
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
}