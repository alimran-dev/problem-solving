#include <stdio.h>

void fun(int a, int b, int c)
{
    int arr[3] = {a, b, c};
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    fun(a, b, c);
    printf("\n");
    printf("%d\n%d\n%d", a, b, c);
    return 0;
}