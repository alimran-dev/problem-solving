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
        vector<char> v;
        for (int i = 0; i < n; i++)
        {
            char a;
            cin >> a;
            v.push_back(a);
        }
        int result = 0;
        int i = 0;
        while (i < v.size())
        {
            if (v[i] == '*' && v[i + 1] == '*')
                break;
            if (v[i] == '@')
                result++;
            i++;
        }
        cout << result << endl;
        getchar();
    }

    return 0;
}