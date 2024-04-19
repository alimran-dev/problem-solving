#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        stack<char> s;
        queue<char> q;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            s.push(c);
            q.push(c);
        }
        int cnt1=0, cnt2=0;
        while (!s.empty())
        {
            if(s.top()!='B')
                cnt1++;
            else
                break;
            s.pop();
        }
        while (!q.empty())
        {
            if(q.front()!='B')
                cnt2++;
            else
                break;
            q.pop();
        }
        int result = n - cnt1 - cnt2;
        cout << result << endl;
    }
    
    return 0;
}