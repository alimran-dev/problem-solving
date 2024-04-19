#include<stdio.h>
int main()
{
    int a, b,result;
    char operator;
    printf("Provide two number: ");
    scanf("%d %d",&a,&b);
    printf("Provide the operation sign: ");
    scanf(" %c", &operator);
    if(operator== '+')
    {
        result = a + b;
    }
    else if(operator == '-')
    {
        result = a - b;
    }
    else if(operator == '*')
    {
        result = a * b;
    }
    else if(operator == '/')
    {
        result = a / b;
    }
    else if(operator == '%')
    {
        result = a % b;
    }
    else
    {
        printf("Invalid Input.");
    }
    printf("The result is: %d", result);
    return 0;
}