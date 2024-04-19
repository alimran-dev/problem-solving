#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, even = 0, odd = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2)
                odd++;
            else
                even++;
        }
        int diff = even - odd;
        int absDiff = abs(diff);
        if(n%2)
            cout << -1;
        else if (even == odd)
            cout << 0;
        else
            cout << absDiff / 2;
        cout << endl;
    }

    return 0;
}