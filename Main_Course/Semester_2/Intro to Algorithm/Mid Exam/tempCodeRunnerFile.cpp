#include <bits/stdc++.h>
using namespace std;

char arr[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{-1, 2}, {1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}, {2, 1}};
int n, m;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    for (int i = 0; i < 8; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        int step = 0;
        if (valid(ci, cj) == true && vis[ci][cj] == false)
        {
            dfs(ci, cj);
            arr[ci][cj] = ++step;
        }
    }
}
int main()
{
    cin >> n >> m;