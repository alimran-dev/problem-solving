#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, result = 0;
    cin >> n >> m;
    if (!(m % 2))
    {
        result = m / 2 * n;
    }
    else if (!(n % 2))
        result = n / 2 * m;
    else
    {
        int x = (m - 1) / 2 * n;
        int y = (n - 1) / 2;
        result = x + y;
    }
    cout << result;
    return 0;
}