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
        vector<int> v;
        v.push_back(n);
        for (int i = n - 1; i >= 1; i--)
        {
            if (v.back() % i)
                v.insert(v.begin(), i);
            else
                v.push_back(i);
        }
        for(int x:v)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}