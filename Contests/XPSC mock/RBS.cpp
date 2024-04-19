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
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            char a;
            cin >> a;
            if (a == '(')
                cnt1++;
            else
                cnt2++;
        }
        if (cnt1 == cnt2)
            cout << "Possible" << endl;
        else
            cout << "Impossible" << endl;
    }

    return 0;
}