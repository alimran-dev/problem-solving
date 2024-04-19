#include<stdio.h>


void gello()
{
    printf("Gello start\n");
    printf("Gello end\n");
}
void hello()
{
    printf("Hello start\n");
    gello();
    printf("Hello end\n");
}
int main()
{
    printf("Main start\n");
    hello();
    printf("Main end\n");
    return 0;
}