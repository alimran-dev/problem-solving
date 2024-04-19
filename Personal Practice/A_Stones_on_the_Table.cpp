#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        if(st.empty())
        {
            st.push(a);
            continue;
        }
        if(st.top()==a)
            cnt++;
        else
            st.push(a);
    }
    cout << cnt;
    return 0;
}