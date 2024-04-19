#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s >> x;
        // int sz_of_x = x.size();
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == x[0])
            {
                int k = i, flag = 1;
                for (int j = 0; j < x.size(); j++)
                {
                    if (s[k] != x[j])
                    {
                        flag = 0;
                        break;
                    }
                    k++;
                }
                if (flag)
                    s.replace(i, x.size(), "#");
            }
        }
        cout << s << endl;
    }
    return 0;
}