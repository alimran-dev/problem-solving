#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt1 = 0, cnt2 = 0;
        for(char x:s)
        {
            if(x=='A')
                cnt1++;
            else
                cnt2++;
        }
        if(cnt1>cnt2)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
    
    return 0;
}