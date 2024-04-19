#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, cnt = 0;
    cin >> n;
    while (n)
    {
        int x = n % 10;
        n /= 10;
        if (x == 4 || x == 7)
            cnt++;
    }
    if (cnt == 4 || cnt == 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}