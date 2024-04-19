#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    while (y++)
    {
        int x, a, b, c, d;
        x = y;
        a = x % 10;
        x /= 10;
        b = x % 10;
        x /= 10;
        c = x % 10;
        x /= 10;
        d = x % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
            break;
    }
    cout << y;
    return 0;
}