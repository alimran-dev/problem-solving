#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool vis[n + 1];
    memset(vis, false, sizeof(vis));
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int a;
        cin >> a;
        vis[a] = true;
    }
    int y;
    cin >> y;
    for (int i = 0; i < y; i++)
    {
        int a;
        cin >> a;
        vis[a] = true;
    }
    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            flag = false;
            break;
        }
    }
    if(flag)
        cout << "I become the guy.";
    else
        cout << " Oh, my keyboard!";
    return 0;
}