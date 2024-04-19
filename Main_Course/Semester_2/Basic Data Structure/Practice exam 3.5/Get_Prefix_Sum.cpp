#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    long long int pref_sum[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    pref_sum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pref_sum[i] = pref_sum[i - 1] + arr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << pref_sum[i] << " ";
    }

    return 0;
}