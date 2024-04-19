#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    cin >> x;
    int arr3[n + m];
    for (int i = 0; i < x; i++)
    {
        arr3[i] = arr[i];
    }
    for (int i = x; i < x + m; i++)
    {
        arr3[i] = arr2[i - x];
    }
    for (int i = x + m; i < n + m; i++)
    {
        arr3[i] = arr[i - m];
    }
    for (int i = 0; i < n + m; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}