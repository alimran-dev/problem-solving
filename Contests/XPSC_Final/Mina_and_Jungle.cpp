#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool vis[1005][1005];
ll dis[1005][1005];
vector<pair<int, int>> d = {{-1, -1}, {1, -1}, {-1, 1}, {1, 1}};
int n, m;
int mat[1005][1005];
bool valid(int i, int j)
{
    if (i >= 1 && i <= n && j >= 1 && j <= m && !vis[i][j])
        return true;
    return false;
}
class cmp
{
public:
    bool operator()(pair<pair<int, int>, ll> a, pair<pair<int, int>, ll> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(int si, int sj)
{
    priority_queue<pair<pair<int, int>, ll>, vector<pair<pair<int, int>, ll>>, cmp> pq;
    pq.push({{si, sj}, 0});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while (!pq.empty())
    {
        pair<pair<int, int>, ll> parent = pq.top();
        pq.pop();
        int a = parent.first.first, b = parent.first.second;
        ll cost = parent.second;
        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj))
            {
                vis[ci][cj] = true;
                if (cost + mat[ci][cj] < dis[ci][cj])
                {
                    if (mat[ci][cj] == -2)
                        dis[ci][cj] = cost;
                    else
                        dis[ci][cj] = cost + mat[ci][cj];
                    pq.push({{ci, cj}, dis[ci][cj]});
                }
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        cin >> n >> m;
        int si, sj, di, dj;
        memset(vis, false, sizeof(vis));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> mat[i][j];
                if (mat[i][j] == 0)
                    vis[i][j] = true;
                if (mat[i][j] == -1)
                {
                    si = i;
                    sj = j;
                }
                else if (mat[i][j] == -2)
                {
                    di = i;
                    dj = j;
                }
                dis[i][j] = 1e18;
            }
        }
        dijkstra(si, sj);
        cout << "Case " << k << ": ";
        if (dis[di][dj] != 1e18)
        {
            cout << dis[di][dj] << endl;
        }
        else
            cout << "Impossible" << endl;
    }

    return 0;
}