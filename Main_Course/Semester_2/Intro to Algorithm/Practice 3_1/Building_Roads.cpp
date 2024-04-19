#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
vector<int> adj[N];
bool vis[N];
void dfs(int node)
{
    vis[node] = true;
    for (int i = 0; i < adj[node].size(); i++)
    {
        if (!vis[adj[node][i]])
        {
            dfs(adj[node][i]);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    memset(vis, false, sizeof(vis));
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int> ans;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
            ans.push_back(i);
        }
    }
    cout << ans.size() - 1 << endl;
    for (int i = 1; i < ans.size(); i++)
    {
        cout << ans[i - 1] << " " << ans[i] << endl;
    }

    return 0;
}