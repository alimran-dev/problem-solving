#include <bits/stdc++.h>
using namespace std;

char arr[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    if (arr[si][sj] == '-')
    {
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) == true && vis[ci][cj] == false)
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    int s1, s2, d1, d2;
    cin >> s1 >> s2 >> d1 >> d2;
    dfs(s1, s2);
    if (vis[d1][d2])
        cout << "YES";
    else
        cout << "NO";
    return 0;
}