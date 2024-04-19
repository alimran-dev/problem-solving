#include <bits/stdc++.h>
using namespace std;
int n, m, cnt;
const int N = 1e3 + 5;
char mat[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int si, int sj)
{
    if (si >= 0 && si < n && sj >= 0 && sj < m && !vis[si][sj])
        return true;
    return false;
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj))
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
            char a;
            cin >> a;
            mat[i][j] = a;
            if (a == '-')
                vis[i][j] = true;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j])
            {
                int tmp = cnt;
                cnt = 0;
                dfs(i, j);
                if (tmp != 0)
                    cnt = min(tmp, cnt);
            }
        }
    }
    if (cnt == 0)
        cout << -1;
    else
        cout << cnt;
    return 0;
}