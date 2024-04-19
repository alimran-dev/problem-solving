#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr[i] = a;
            sum += a;
        }
        int avr = sum / n;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > avr)
            {
                int r = arr[i] - avr;
                for (int j = i + 1; j < n; j++)
                {
                    if (arr[j] < avr)
                    {
                        int tr = min(r, avr - arr[j]);
                        arr[i] -= tr;
                        arr[j] += tr;
                        if (!r) break;
                    }
                }
            }
        }
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != avr)
            {
                flag = false;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}