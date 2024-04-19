#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    bool flag1 = false;
    bool flag2 = false;
    int cntEven = 0, cntOdd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (!flag1)
            {
                cntEven = arr[i];
                flag1 = true;
            }
            else
            {
                cntEven += arr[i];
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            if (!flag2)
            {
                cntOdd = arr[i];
                flag2 = true;
            }
            else
            {
                cntOdd += arr[i];
                break;
            }
        }
    }
    if (cntOdd > cntEven && cntOdd % 2 == 0)
        cout << cntOdd << endl;
    else
        cout << cntEven << endl;
    return 0;
}