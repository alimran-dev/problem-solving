#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    int c = a.first.compare(b.first);
    if (c == 0)
    {
        if (a.second > b.second)
            return true;
        else
            return false;
    }
    else if (c < 0)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> v;
    while (n--)
    {
        string a;
        int b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), cmp);
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}