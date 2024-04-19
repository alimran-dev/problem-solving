#include <bits/stdc++.h>
using namespace std;
bool fun(int n)
{
    if (n == 1)
        return true;
    if (n % 2 == 0)
    {
        bool ans = fun(n / 2);
        return ans;
    }
    if (n > 3)
    {
        bool ans = fun(n - 3);
        return ans;
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool ans = fun(n);
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}