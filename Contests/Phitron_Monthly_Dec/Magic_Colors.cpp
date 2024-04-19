#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        stack<char> st;
        stack<char> st2;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            char a;
            cin >> a;
            if (st.empty())
            {
                st.push(a);
            }
            else if (st.top() == a)
            {
                st.pop();
            }
            else if (st.top() == 'R' && a == 'B')
            {
                st.pop();
                if (st.empty() || st.top() != 'P')
                    st.push('P');
                else
                    st.pop();
            }
            else if (st.top() == 'R' && a == 'G')
            {
                st.pop();
                if (st.empty() || st.top() != 'Y')
                    st.push('Y');
                else
                    st.pop();
            }
            else if (st.top() == 'B' && a == 'G')
            {
                st.pop();
                if (st.empty() || st.top() != 'C')
                    st.push('C');
                else
                    st.pop();
            }
            else if (st.top() == 'B' && a == 'R')
            {
                st.pop();
                if (st.empty() || st.top() != 'P')
                    st.push('P');
                else
                    st.pop();
            }
            else if (st.top() == 'G' && a == 'R')
            {
                st.pop();
                if (st.empty() || st.top() != 'Y')
                    st.push('Y');
                else
                    st.pop();
            }
            else if (st.top() == 'G' && a == 'B')
            {
                st.pop();
                if (st.empty() || st.top() != 'C')
                    st.push('C');
                else
                    st.pop();
            }
            else
            {
                st.push(a);
            }
        }
        while (!st.empty())
        {
            st2.push(st.top());
            st.pop();
        }
        while (!st2.empty())
        {
            cout << st2.top();
            st2.pop();
        }

        cout << endl;
    }

    return 0;
}