#include <stdio.h>
int main()
{
    int a, b, c, count = 0;
    scanf("%d %d", &a, &b);
    int arr[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &c);
    printf("\n");
    int flag = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr[i][j] == c)
            {
                // count++;
                // if(count==1)
                // {
                //     printf("Location: %d,%d\n",i,j);
                // }
                printf("Location: %d,%d\n", i, j);
                flag = 1;
                break;
            }
        }
        if (flag)
            break;
    }

    return 0;
}