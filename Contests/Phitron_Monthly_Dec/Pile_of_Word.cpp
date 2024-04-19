#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string a, b;
        cin >> a >> b;
        if (a.length() != b.length())
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            if (a == b)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}