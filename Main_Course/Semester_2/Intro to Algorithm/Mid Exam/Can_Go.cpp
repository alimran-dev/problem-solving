#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 5;
vector<pair<int,long long int>> v[N];
long long int dis[N];
class cmp
{
public:
    bool operator()(pair<int,long long int> a, pair<int,long long int> b)
    {
        return a.second > b.second;
    }
};
void dijkstra(int src)
{
    priority_queue<pair<int,long long int>, vector<pair<int,long long int>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<int,long long int> parent = pq.top();
        pq.pop();
        int node = parent.first;
        long long int cost = parent.second;
        for (pair<int,long long int> child : v[node])
        {
            int childNode = child.first;
            long long int childCost = child.second;
            if (cost + childCost < dis[childNode])
            {
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
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
        long long int c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }
    for (int i = 0; i < N; i++)
    {
        dis[i] = 1e18;
    }
    int s;
    cin >> s;
    dijkstra(s);
    int t;
    cin >> t;
    while (t--)
    {
        long long int w, dw;
        cin >> w >> dw;
        if (dis[w] <= dw)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}