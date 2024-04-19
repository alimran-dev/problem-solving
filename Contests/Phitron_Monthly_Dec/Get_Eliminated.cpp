#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        stack<char> l;
        string s;
        cin >> s;
        for (char a : s)
        {
            if (l.empty())
            {
                l.push(a);
            }
            else if (l.top() == a && a == '1')
            {
                l.pop();
            }
            else
            {
                l.push(a);
            }
        }
        if (l.empty())
        {
            cout << 0 << endl;
            continue;
        }
        vector<int> mxList;
        int idx = 0;
        while (!l.empty())
        {
            if (l.top() == '0')
            {
                if (mxList.empty())
                {
                    mxList.push_back(1);
                }
                else
                {
                    mxList.back() = mxList.back() + 1;
                }
                l.pop();
            }
            else if (l.top() == '1')
            {
                mxList.push_back(0);
                l.pop();
            }
        }
        sort(mxList.begin(), mxList.end());
        cout << mxList.back() << endl;
    }

    return 0;
}