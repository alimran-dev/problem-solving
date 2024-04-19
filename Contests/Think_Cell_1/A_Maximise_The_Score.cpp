#include<bits/stdc++.h>
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
        for (int i = 0; i < 2*n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        long long int sum = 0;
        for (int i = 0; i < v.size(); i+=2)
        {
            int mn = min(v[i], v[i + 1]);
            sum += mn;
        }
        cout << sum << endl;
    }
    
    return 0;
}