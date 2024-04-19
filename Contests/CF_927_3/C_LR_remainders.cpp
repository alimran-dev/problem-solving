#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        string s;
        cin >> s;
        int si = 0;
        while (!v.empty())
        {
            long long int mul = 1;
            for (int i = 0; i < v.size(); i++)
            {
                mul *= v[i];
            }
            cout << mul % m << " ";
            if (s[si] == 'L')
            {
                reverse(v.begin(), v.end());
                v.pop_back();
                reverse(v.begin(), v.end());
            }
            else
                v.pop_back();
            si++;
        }
        cout << endl;
    }

    return 0;
}