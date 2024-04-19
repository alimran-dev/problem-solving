#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int ar[n], arr[n], arrr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = ar[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    int tmp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            int tmp = ar[i] - arr[i];
            if (tmp < 0)
            {
                tmp *= -1;
            }
            arrr[i] = tmp;
        }
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arrr[i]);
        }
        printf("\n");
    }

    return 0;
}