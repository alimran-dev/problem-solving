#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt[26] = {0};
    for (int i = 0; i < s.size();i++)
    {
        if(!cnt[s[i]-'a'])
            cnt[s[i] - 'a']++;
    }
    int sum = 0;
    for (int i = 0; i < 26; i++)
    {
        if(cnt[i])
            sum++;
    }
    if (sum % 2)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
    return 0;
}