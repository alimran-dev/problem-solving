#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,cnt=0;
        cin >> n;
        while (n)
        {
            int x = n % 2;
            n /= 2;
            if(x)
                cnt++;
        }
        int result = 0,j=1;
        for (int i = 1; i <= cnt; i++)
        {
            result += j;
            j *= 2;
        }
        cout << result << endl;
    }
    
    return 0;
}