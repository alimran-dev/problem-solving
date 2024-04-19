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
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        int r = sum % 3;
        bool a;
        if (r == 1)
            a = true;
        else if (r == 2)
            a = false;
        int m = 0;
        if (r && !a)
            m = 1;
        else if (r && a)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 3 == 1)
                {
                    m = 1;
                    break;
                }
                m = 2;
            }
        }
        cout << m << endl;
    }

    return 0;
}