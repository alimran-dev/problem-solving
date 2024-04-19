#include<stdio.h>
int main()
{
    int a, result;
    result = 1;
    printf("Input a number: ");
    scanf("%d", &a);
    for (int i = 1; i <= a;i++)
    {
        result *=i;
    }
    printf("The factorial of %d is: %d", a, result);
    return 0;
}