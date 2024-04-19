#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, total = 0;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        int m = i;
        while (m)
        {
            int x = m % 10;
            m /= 10;
            sum += x;
        }
        if(sum>=a && sum<=b)
            total += i;
    }
    cout << total << endl;
    return 0;
}