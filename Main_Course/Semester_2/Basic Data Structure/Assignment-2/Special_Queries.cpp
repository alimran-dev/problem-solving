#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> a;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            string s;
            cin >> s;
            a.push(s);
        }
        else if (n == 1)
        {
            if (a.size() > 0)
            {
                cout << a.front() << endl;
                a.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}