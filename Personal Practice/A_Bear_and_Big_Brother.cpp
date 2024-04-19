#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, yr = 0;
    cin >> a >> b;
    int x = a, y = b;
    while (true)
    {
        x *= 3;
        y *= 2;
        yr++;
        if(x>y)
            break;
    }
    cout << yr;
    return 0;
}