#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int mn = INT_MIN, mx = INT_MAX, cnt = 0;
        queue<int> qq;
        while (n--)
        {
            int a, x;
            cin >> a >> x;
            if (a == 1)
            {
                if (x > mn)
                    mn = x;
            }
            else if (a == 2)
            {
                if (x < mx)
                    mx = x;
            }
            else if (a == 3)
            {
                qq.push(x);
            }
        }
        while (!qq.empty())
        {
            if (qq.front() >= mn && qq.front() <= mx)
                cnt++;
            qq.pop();
        }

        int result = mx - mn + 1 - cnt;
        if (result >= 0)
        {
            cout << result << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}