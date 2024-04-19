#include <bits/stdc++.h>
using namespace std;
int divisor(int n)
{
    int x = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            x = n / i;
            break;
        }
    }
    return x;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            arr[i] = i;
        }
        int ans = 1;
        for (int i = 2; i <= n; i++)
        {
            int d = divisor(arr[i]);
            int a = arr[d];
            arr[d] = arr[i];
            arr[i] = a;
            if (arr[d] == 1)
                ans = d;
            else if (arr[i] == 1)
                ans = i;
        }
        cout << ans << endl;
    }
    return 0;
}