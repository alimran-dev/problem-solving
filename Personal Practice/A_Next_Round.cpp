#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, cnt = 0;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }
    int val = arr[k - 1];
    for (int i = 0; i < n; i++)
    {
        if((!val && arr[i]>val) || (val && arr[i]>=val))
            cnt++;
    }
    cout << cnt;
    return 0;
}