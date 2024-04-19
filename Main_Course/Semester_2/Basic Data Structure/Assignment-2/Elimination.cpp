#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        stack<char> a;
        string s;
        cin >> s;
        for (char c : s)
        {
            if (a.empty())
            {
                a.push(c);
            }
            else
            {
                if (a.top() == '0' && c == '1')
                {
                    a.pop();
                }
                else
                    a.push(c);
            }
        }
        if (a.size() == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}