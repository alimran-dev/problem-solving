#include <bits/stdc++.h>
using namespace std;
int n, m, total = 0;
const int N = 25;
char adj[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int si,int sj)
{
    if(si>=0 && si<m && sj>=0 && sj<n && !vis[si][sj])
        return true;
    return false;
}
void dfs(int si,int sj)
{
    vis[si][sj] = true;
    total++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj))
        {
            dfs(ci,cj);
        }
    }
    
}
int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        int si, sj;
        cin >> n >> m;
        memset(vis, false, sizeof(vis));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> adj[i][j];
                if (adj[i][j] == '#')
                    vis[i][j] = true;
                else if (adj[i][j] == '@')
                    si = i, sj = j;
            }
        }
        total = 0;
        dfs(si,sj);
        cout << "Case " << k << ":"
             << " " << total << endl;
    }

    return 0;
}