#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int a, b;
        if(x<y)
        {
            a = x;
            b = y;
        }    
        else
        {
            a = y;
            b = x;
        }
        long long int sum = 0;
        for (int i = a+1; i < b; i++)
        {
            if(i%2)
                sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}