#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 1;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        char s[2];
        cin >> s[0] >> s[1];
        if (s[0] == '1' && s[1] == '0')
            a = 0;
        else
            a = 1;
        if (!v.empty() && v.back() != a)
            cnt++;
        v.push_back(a);
    }
    cout << cnt;
    return 0;
}