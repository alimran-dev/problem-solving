#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;
    while (n--)
    {
        char a, b, c;
        cin >> a >> b >> c;
        if((a=='+' && b=='+') || (b=='+'&&c=='+'))
            x++;
        else
            x--;
    }
    cout << x;
    return 0;
}