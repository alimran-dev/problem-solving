#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char arr[n][n];
        int cnt[n] = {0};
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char a;
                cin >> a;
                arr[i][j] = a;
                if (a=='1')
                    cnt[i]++;
            }
        }
        int val = cnt[0];
        for (int i = 0; i < n; i++)
        {
            if(cnt[i]>val)
                val = cnt[i];
        }
        bool square = true;
        for (int i = 0; i < n; i++)
        {
            if(cnt[i] && cnt[i]!=val)
            {
                square = false;
                break;
            }
        }
        if(square)
            cout << "SQUARE" << endl;
        else
            cout << "TRIANGLE" << endl;
    }

    return 0;
}