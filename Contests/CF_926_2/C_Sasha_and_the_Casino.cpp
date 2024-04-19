#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k, x, a;
        cin >> k >> x >> a;
        if ((a - 1) / k >= x)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}