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
        stack<char> st;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            char a;
            cin >> a;
            if(st.empty())
            {
                st.push(a);
            }
            else
            {
                if(st.top()!=a)
                    cnt++;
                st.push(a);
            }
        }
        cout << cnt << endl;
    }
    
    return 0;
}