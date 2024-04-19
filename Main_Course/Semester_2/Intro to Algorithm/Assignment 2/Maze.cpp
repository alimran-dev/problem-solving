#include <bits/stdc++.h>
using namespace std;
int n, m;
const int N = 1e3 + 5;
char mat[N][N];
bool vis[N][N];
pair<int, int> parent[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int si, int sj)
{
    if (si >= 0 && si < n && sj >= 0 && sj < m && !vis[si][sj])
        return true;
    return false;
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int si = par.first, sj = par.second;
        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first, cj = sj + d[i].second;
            if (valid(ci, cj))
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {si, sj};
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    memset(vis, false, sizeof(vis));
    int si, sj, di, dj;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char a;
            cin >> a;
            mat[i][j] = a;
            parent[i][j] = {-1, -1};
            if (a == '#')
                vis[i][j] = true;
            else if (a == 'R')
                si = i, sj = j;
            else if (a == 'D')
                di = i, dj = j;
        }
    }
    bfs(si, sj);
    while (di != si || dj != sj)
    {
        int a, b;
        a = parent[di][dj].first;
        b = parent[di][dj].second;
        if (vis[a][b] && (a != si || b != sj))
            mat[a][b] = 'X';
        else
            break;
        di = a, dj = b;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j];
        }
        cout << endl;
    }
    return 0;
}