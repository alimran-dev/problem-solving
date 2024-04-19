#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
vector<int> adj[N];
bool vis[N];
int dis[N];
void bfs(int node)
{
    queue<int> q;
    q.push(node);
    vis[node] = true;
    dis[node] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : adj[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                dis[child] = dis[par] + 1;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    int x, y, k;
    cin >> x >> y >> k;
    bfs(x);
    if (!vis[y] || dis[y] > k * 2)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}