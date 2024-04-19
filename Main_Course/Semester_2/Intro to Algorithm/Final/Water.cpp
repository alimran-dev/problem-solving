#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.second > b.second;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back({i, x});
        }
        sort(v.begin(), v.end(), cmp);
        int i, j;
        if (v[0].first < v[1].first)
        {
            i = v[0].first, j = v[1].first;
        }
        else
            i = v[1].first, j = v[0].first;
        cout << i << " " << j << endl;
    }

    return 0;
}