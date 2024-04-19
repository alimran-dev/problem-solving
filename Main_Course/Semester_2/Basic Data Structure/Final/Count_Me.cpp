#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    getchar();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        map<string, int> mp;
        pair<string, int> pp;
        pp.second = 0;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > pp.second)
            {
                pp.first = word;
                pp.second = mp[word];
            }
        }
        cout << pp.first << " " << pp.second << endl;
    }

    return 0;
}