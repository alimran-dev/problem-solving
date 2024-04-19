#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5][5];
    int x, y, steps = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int a;
            cin >> a;
            if (a)
            {
                x = j+1;
                y = i+1;
            }
        }
    }
    if (x < 3)
        steps += (3 - x);
    else if (x > 3)
        steps += (x - 3);
    if (y < 3)
        steps += (3 - y);
    else if (y > 3)
        steps += (y - 3);
    cout << steps;
    return 0;
}