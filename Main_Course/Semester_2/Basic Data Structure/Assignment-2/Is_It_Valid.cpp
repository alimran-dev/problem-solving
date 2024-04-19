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
                if (a.top() == c)
                {
                    a.push(c);
                }
                else
                {
                    a.pop();
                }
            }
        }
        if (a.size() == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}