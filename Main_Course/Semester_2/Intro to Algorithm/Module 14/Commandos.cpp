#include <bits/stdc++.h>
using namespace std;
const int N = 105;
vector<int> adj[N];
bool vis[N];
int dis[N];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    dis[s] = 0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for(int child:adj[par])
        {
            if(!vis[child])
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
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
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
        int s, dest;
        memset(dis, -1, sizeof(dis));
        memset(vis, false, sizeof(vis));
        cin >> s >> dest;
        bfs(s);
        cout << dis[dest] << endl;
    }

    return 0;
}