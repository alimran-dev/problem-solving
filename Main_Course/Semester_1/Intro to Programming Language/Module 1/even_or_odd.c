#include<stdio.h>
int main()
{
    int a;
    printf("Provide a integer number: ");
    scanf("%d", &a);
    if (a%2==0)
    {
        printf("%d is an even number.", a);
        return 0;
    }
    printf("%d is an odd number.",a);
    return 0;
}