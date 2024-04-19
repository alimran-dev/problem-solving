#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int marks[N];
int dp[N][N];
bool fun(int n, int m)
{
    if (m == 0)
        return true;
    else if (n == 0)
        return false;
    if (dp[n][m] != -1)
        return dp[n][m];
    if (marks[n] <= m)
    {
        bool op1 = fun(n - 1, m - marks[n]);
        bool op2 = fun(n - 1, m);
        return dp[n][m] = op1 || op2;
    }
    else
    {
        int op1 = fun(n - 1, m);
        return dp[n][m] = op1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            cin >> marks[i];
        }
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= 1000 - m; j++)
            {
                dp[i][j] = -1;
            }
        }
        bool ans = fun(n, 1000 - m);
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}