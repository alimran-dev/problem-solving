#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int k, n, w, result, sum = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        sum += i * k;
    }
    result = sum - n;
    if (result < 0)
        cout << 0;
    else
        cout << result;
    return 0;
}