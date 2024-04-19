#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int mx = 4 * n - 2;
        int result;
        if (k != mx && k % 2 == 0)
            result = k / 2;
        else
            result = k / 2 + 1;
        cout << result << endl;
    }

    return 0;
}