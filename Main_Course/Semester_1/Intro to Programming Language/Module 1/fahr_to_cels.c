#include<stdio.h>
int main()
{
    int f,c;
    printf("Please input fahrenheit: ");
    scanf("%d", &f);
    c =(f-32)*5/9;
    printf("The celsius value is: %d",c);
    return 0;
}