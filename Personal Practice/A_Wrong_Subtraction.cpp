#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        int x = n % 10;
        if (x)
            n--;
        else
            n /= 10;
    }
    cout << n;
    return 0;
}