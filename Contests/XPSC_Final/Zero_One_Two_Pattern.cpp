#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s1 = 0, s2 = 2 * n - 3;
    int x = 1;
    bool flag = true;
    for (int i = 1; i < 2 * n; i++)
    {
        for (int j = 1; j <= s1; j++)
        {
            cout << " ";
        }
        if (i != n)
            cout << x;
        for (int j = 1; j <= s2; j++)
        {
            cout << " ";
        }
        cout << x << endl;
        if (i < n)
        {
            s1++;
            s2 -= 2;
        }
        else
        {
            s1--;
            s2 += 2;
        }
        if (x == 2)
            x = 0;
        else
            x++;
    }

    return 0;
}