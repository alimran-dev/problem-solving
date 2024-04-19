#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] = x;
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            b[i] = x;
        }
        int k2 = k / 2;
        sort(a, a + n);
        sort(b, b + m);
        unique(a, a + n);
        unique(b, b + m);
        vector<int> v;
        bool testAgain = false;
        for (int i = 0; i < k2; i++)
        {
            if(a[i]!=b[i])
            {
                v.push_back(a[i]);
                v.push_back(b[i]);
            }
            else
            {
                if(a[i+1]!=b[i+1])
            }
        }
        sort(v.begin(), v.end());
        bool flag = true;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] != i + 1)
                flag = false;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}