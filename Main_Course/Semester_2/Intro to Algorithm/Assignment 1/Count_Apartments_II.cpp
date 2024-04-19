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
int cnt = 0;
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    if (arr[si][sj] == '#')
    {
        return;
    }
    cnt++;
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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '.' && vis[i][j] == false)
            {
                cnt = 0;
                dfs(i, j);
                v.push_back(cnt);
            }
        }
    }
    if (v.size())
    {
        sort(v.begin(), v.end());
        for (int x : v)
        {
            cout << x << " ";
        }
    }
    else
        cout << 0;

    return 0;
}