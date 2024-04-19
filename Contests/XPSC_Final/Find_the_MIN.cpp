#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (q--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        else if (a == 2)
        {
            if (pq.empty())
                cout << "empty" << '\n';
            else
            {
                int y = pq.top();
                cout << y << "\n";
                while (!pq.empty() && pq.top() == y)
                {
                    pq.pop();
                }
            }
        }
    }
    return 0;
}