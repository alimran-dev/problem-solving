#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }
    bool flag = true;
    int i = 0, j = n - 1;
    while (i<j)
    {
        if(arr[i]!=arr[j])
            flag = false;
        i++;
        j--;
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}