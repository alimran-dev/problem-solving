#include <bits/stdc++.h>
using namespace std;

void sum(int x, int n)
{
    long long int result = 0;
    int s = 2;
    for (int i = 0; i < n / 2; i++)
    {
        long long int mult = 1;
        for (int j = 0; j < s; j++)
        {
            mult *= x;
        }
        result += mult;
        s += 2;
    }
    cout << result;
}
int main()
{
    int x, n;
    cin >> x >> n;
    sum(x, n);
    return 0;
}