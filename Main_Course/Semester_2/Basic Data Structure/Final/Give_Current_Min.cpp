#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (n--)
    {
        int a;
        cin >> a;
        pq.push(a);
    }
    cin >> q;
    while (q--)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if (a == 1)
        {
            if (!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty" << endl;
        }
        else if (a == 2)
        {
            if (!pq.empty())
                pq.pop();
            if (!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty" << endl;
        }
    }

    return 0;
}