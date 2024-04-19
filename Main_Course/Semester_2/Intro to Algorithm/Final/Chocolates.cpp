#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 2;
int sum = 0;
int chclt[N];
int dp[N][N];
bool fun(int n, int c)
{
    if (c == 0)
        return true;
    else if (n == 0)
        return false;
    if (dp[n][c] != -1)
        return dp[n][c];
    if (chclt[n] <= c)
    {
        bool op1 = fun(n - 1, c - chclt[n]);
        bool op2 = fun(n - 1, c);
        return dp[n][c] = op1 || op2;
    }
    else
    {
        bool op1 = fun(n - 1, c);
        return dp[n][c] = op1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        sum = 0;
        memset(dp, -1, sizeof(dp));
        for (int i = 1; i <= n; i++)
        {
            cin >> chclt[i];
            sum += chclt[i];
        }
        if (sum % 2 != 0)
            cout << "NO" << endl;
        else
        {
            bool ans = fun(n, sum / 2);
            if (ans)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}