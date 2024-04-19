#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = 0, u = 0;
    for(char c:s)
    {
        if(c>='a' && c<='z')
            l++;
        else
            u++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if(u>l && (s[i]>='a' && s[i]<='z'))
            s[i] -= 32;
        else if(u<=l && (s[i]>='A' && s[i]<='Z'))
            s[i] += 32;
    }
    cout << s;
    return 0;
}