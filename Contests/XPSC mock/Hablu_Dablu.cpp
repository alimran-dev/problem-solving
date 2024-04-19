#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        pq.push(a);
    }
    int cnt = 0;
    while (!pq.empty() && h > 0)
    {
        if (pq.top() - cnt <= 0)
        {
            pq.pop();
            continue;
        }
        cnt++;
        int x = pq.top() - cnt;
        h -= x;
    }
    if (h > 0)
        cout << "Hablu" << endl;
    else if (!pq.empty())
        cout << "Dablu" << endl;
    return 0;
}