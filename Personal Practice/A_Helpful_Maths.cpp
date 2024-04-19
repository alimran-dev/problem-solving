#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<char> c;
    for(char a:s)
    {
        if(a!='+')
            c.push_back(a);
    }
    sort(c.begin(), c.end());
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i];
        if(i<c.size()-1)
            cout << '+';
    }
    return 0;
}