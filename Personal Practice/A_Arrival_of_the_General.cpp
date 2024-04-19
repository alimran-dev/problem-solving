/*
-----------------------------
author: Md. Al Imran
created: 27-03-2024 23:48:47
-----------------------------
*/
#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int arr[n];
    int minI = 0, maxI = 0, minV = arr[0], maxV = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>maxV)
        {
            maxI = i;
            maxV = arr[i];
        }
        if(arr[i]<=minV)
        {
            minI = i;
            minV = arr[i];
        }
    }
    int x = maxI + (n - 1 - minI);
    cout << x << endl;
    return 0;
}