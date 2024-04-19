#include <bits/stdc++.h>
using namespace std;
int n, m;
int sai, saj, sbi, sbj;
const int N = 1005;
char mat[N][N];
bool vis[N][N];
bool ans = false;
pair<int, int> path[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int si, int sj)
{
    if (si >= 0 && si < n && sj >= 0 && sj < m)
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
        int a = par.first, b = par.second;
        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) && !vis[ci][cj] && mat[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                path[ci][cj] = {d[i].first, d[i].second};
            }
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
            cin >> mat[i][j];
            vis[i][j] = false;
            path[i][j] = {0, 0};
            if (mat[i][j] == 'A')
            {
                sai = i;
                saj = j;
            }
            else if (mat[i][j] == 'B')
            {
                sbi = i;
                sbj = j;
            }
        }
    }
    bfs(sai, saj);
    if (!vis[sbi][sbj])
    {
        cout << "NO";
        return 0;
    }
    cout << "YES" << endl;
    vector<pair<int, int>> ans;
    pair<int, int> dest = {sbi, sbj};
    while (dest.first != sai || dest.second != saj)
    {
        ans.push_back({path[dest.first][dest.second]});
        dest.first -= ans.back().first;
        dest.second -= ans.back().second;
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (pair<int, int> a : ans)
    {
        if (a.first==0 && a.second==1)
            cout << "R";
        else if(a.first==0 && a.second==-1)
            cout << "L";
        else if(a.first==-1 && a.second==0)
            cout << "U";
        else if(a.first==1 && a.second==0)
            cout << "D";
    }
    return 0;
}