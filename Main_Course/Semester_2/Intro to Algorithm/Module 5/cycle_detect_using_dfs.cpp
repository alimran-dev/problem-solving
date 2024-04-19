#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
bool vis[N];
int parentArray[N];
bool ans = false;
void dfs(int parent)
{
    vis[parent] = true;
    for (int child : adj[parent])
    {
        if(vis[child] && parentArray[parent]!=child)
        {
            ans = true;
        }
        if (!vis[child])
        {
            parentArray[child] = parent;
            dfs(child);
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
    memset(parentArray, -1, sizeof(parentArray));
    for (int i = 1; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    if(ans)
        cout << "Cycle detected";
    else
        cout << "Cycle not detected";
    return 0;
}