#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const long long int INF = 1e16;
int main()
{
    ll n, e;
    cin >> n >> e;
    ll adj[n+1][n+1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            adj[i][j] = INF;
            if(i==j)
                adj[i][j] = 0;
        }
    }
    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if(adj[a][b]>c)
            adj[a][b] = c;
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if((adj[i][k]!=INF && adj[k][j]!=INF) && adj[i][k]+adj[k][j]<adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        if(adj[a][b]!=INF)
            cout << adj[a][b] << endl;
        else
            cout << -1 << endl;
    }
    

    return 0;
}