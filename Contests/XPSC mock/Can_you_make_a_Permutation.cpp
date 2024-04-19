#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n + 1];
        bool flag[n + 1];
        // memset(flag, false, sizeof(flag));
        for (int i = 0; i <= n; i++)
        {
            flag[i] = false;
        }

        int cnt1 = 0, cnt2 = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (arr[i] > n)
                cnt1++;
            else if (flag[arr[i]])
                cnt2++;
            else
                flag[arr[i]] = true;
        }
        // for (int i = 0; i < n; i++)
        // {
        //     if (!flag[i])
        //         cnt2++;
        // }
        if (cnt1 + cnt2 <= k)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}