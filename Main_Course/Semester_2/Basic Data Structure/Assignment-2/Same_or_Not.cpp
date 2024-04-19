#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> a;
    queue<int> b;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.push(x);
    }
    if (a.size() != b.size())
    {
        cout << "NO";
        return 0;
    }
    while (!a.empty())
    {
        if (a.top() != b.front())
        {
            cout << "NO";
            return 0;
        }
        a.pop();
        b.pop();
    }
    cout << "YES";
    return 0;
}