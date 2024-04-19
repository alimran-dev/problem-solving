#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mx = INT_MIN, total = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        total += (b - a);
        mx = max(total, mx);
    }
    cout << mx;
    return 0;
}