#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
int weight[N];
int value[N];
int dp[N][N];
int knapsack(int n, int W)
{
    if (n == 0 || W == 0)
        return 0;
    if (dp[n][W] != -1)
        return dp[n][W];
    if (weight[n] <= W)
    {
        int op1 = knapsack(n - 1, W - weight[n]) + value[n];
        int op2 = knapsack(n - 1, W);
        return dp[n][W] = max(op1, op2);
    }
    else
    {
        int op1 = knapsack(n - 1, W);
        return dp[n][W] = op1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        memset(dp, -1, sizeof(dp));
        for (int i = 1; i <= n; i++)
        {
            cin >> weight[i];
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> value[i];
        }
        cout << knapsack(n, w) << endl;
    }
    return 0;
}