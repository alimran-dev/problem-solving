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
        if(n<=26)
        {
            char a = n + 94;
            cout << "aa" << a << endl;
        }
        else
        {
            stack<char> st;
            int a = n / 26;
            n = n % 26;
            while (a--)
            {
                st.push('z');
            }
            if(st.size()==1)
            {
                st.push(n + 95);
                st.push('a');
            }
            else
            {
                st.push(n + 96);
            }
            while (!st.empty())
            {
                cout << st.top();
                st.pop();
            }
            cout << endl;
        }
    }
    
    return 0;
}