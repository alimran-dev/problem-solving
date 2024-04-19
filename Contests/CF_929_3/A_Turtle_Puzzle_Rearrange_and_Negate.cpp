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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int l = 0, r = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0 && i == 0)
                l = i, r = i;
            else if (arr[i] < 0)
                r = i;
        }
        for (int i = l; i <= r; i++)
        {
            if (arr[i] < 0)
                arr[i] *= -1;
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }

    return 0;
}