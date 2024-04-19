#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string ss;
    cin >> s >> ss;
    bool ans = true;
    int i = 0, j = s.size() - 1;
    while (i<s.size())
    {
        if(s[i]!=ss[j])
        {
            ans = false;
            break;
        }
        i++;
        j--;
    }
    if(ans)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}