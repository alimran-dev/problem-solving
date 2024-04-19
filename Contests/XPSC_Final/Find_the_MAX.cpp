#include <bits/stdc++.h>
using namespace std;
// bool cmp(pair<int, int> a, pair<int, int> b)
// {
//     if (a.first < b.first)
//         return true;
//     else if (a.first == b.first && a.second < b.second)
//         return true;
//     else
//         return false;
// }
class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        if (a.first < b.first)
            return true;
        else if (a.first == b.first && a.second < b.second)
            return true;
        else
            return false;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    // vector<pair<int, int>> v;
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq2;
    while (q--)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            int x;
            cin >> x;
            bool f = false;
            while (!pq.empty())
            {
                int val = pq.top().second;
                int cnt = pq.top().first;
                if (val == x)
                {
                    pq2.push({cnt + 1, val});
                    f = true;
                }
                else
                {
                    pq2.push({cnt, val});
                }
            }
            if (!f)
            {
                pq2 = pq;
            }
        }
        else if (a == 2)
        {
            if (!pq2.empty())
            {
                cout << pq2.top().second << '\n';
                pq2.pop();
                pq = pq2;
            }
            else
            {
                cout << "empty" << '\n';
            }
        }
    }

    return 0;
}