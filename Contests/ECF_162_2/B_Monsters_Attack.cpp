#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll h[n];
        ll cr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> cr[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (cr[i] > 0 && cr[j] > 0 && cr[i] > cr[j])
                {
                    swap(cr[i], cr[j]);
                    swap(h[i], h[j]);
                }
                else if (cr[i] < 0 && cr[j] < 0 && cr[i] < cr[j])
                {
                    swap(cr[i], cr[j]);
                    swap(h[i], h[j]);
                }
                else if (cr[i] < 0 && cr[j] > 0)
                {
                    int x = cr[i] * (-1);
                    if (x > cr[j])
                    {
                        swap(cr[i], cr[j]);
                        swap(h[i], h[j]);
                    }
                }
                else if (cr[i] > 0 && cr[j] < 0)
                {
                    int x = cr[j] * (-1);
                    if (cr[i] > x)
                    {
                        swap(cr[i], cr[j]);
                        swap(h[i], h[j]);
                    }
                }
            }
        }
        bool flag = true;
        int j = 0;
        while (j < n)
        {
            if (h[j] < k)
            {
                int kk = k;
                while (j < n && kk)
                {
                    kk -= h[j];
                    h[j] = 0;
                    j++;
                }
            }
            else if (h[j] > k)
            {
                h[j] -= k;
            }
            else
            {
                h[j] = 0;
                j++;
            }
            for (int i = 0; i < n; i++)
            {
                if (cr[i] < 0)
                    cr[i]++;
                else if (cr[i] > 0)
                    cr[i]--;
                if (cr[i]==0 && h[i]!=0)
                    flag = false;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}