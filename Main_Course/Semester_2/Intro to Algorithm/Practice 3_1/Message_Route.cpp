#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
vector<int> adj[N];
bool vis[N];
int dis[N];
int parent[N];
void bfs(int node)
{
    queue<int> q;
    q.push(node);
    vis[node] = true;
    dis[node] = 1;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int child : adj[par])
        {
            if (!vis[child])
            {
                vis[child] = true;
                q.push(child);
                dis[child] = dis[par] + 1;
                parent[child] = par;
            }
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    memset(vis, false, sizeof(vis));
    memset(dis, 0, sizeof(dis));
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1);
    if(vis[n])
    {
        cout << dis[n] << endl;
        vector<int> ans;
        int dest = n;
        while (dest!=0)
        {
            ans.push_back(dest);
            dest = parent[dest];
        }
        reverse(ans.begin(), ans.end());
        for(int child:ans)
            cout << child << " ";
    } else
        cout << "IMPOSSIBLE";
    return 0;
}