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
bool flag = false;
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    if (arr[si][sj] == '#')
    {
        return;
    }
    if (arr[si][sj] == 'B')
        flag = true;
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
    int si, sj;
    for (int i = 0; i < 1005; i++)
    {
        for (int j = 0; j < 1005; j++)
        {
            if (arr[i][j] == 'A')
            {
                si = i;
                sj = j;
                break;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    dfs(si, sj);
    if(flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}