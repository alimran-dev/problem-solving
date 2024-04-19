#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int r = a % b;
        int ans = b - r;
        if(!r)
            ans = 0;
        cout << ans << endl;
    }
    
    return 0;
}