#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s1 = n - 1, k1 = n, s2 = 0;
    for (int i = 1; i < 2 * n; i++)
    {
        for (int j = 1; j <= s1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= k1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= s2; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= k1; j++)
        {
            cout << "*";
        }
        cout << endl;
        if (i < n)
        {
            s1--;
            k1--;
            s2 += 4;
        }
        else
        {
            s1++;
            k1++;
            s2 -= 4;
        }
    }

    return 0;
}