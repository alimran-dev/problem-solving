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
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        long long int sum = 0;
        for (int i = 1; i < v.size(); i++)
        {
            int s = v[i] - v[i - 1];
            sum += s;
        }
        cout << sum << endl;
    }
    
    return 0;
}