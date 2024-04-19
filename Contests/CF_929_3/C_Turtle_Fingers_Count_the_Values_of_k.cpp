#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, l;
        cin >> a >> b >> l;
        int ans = 0;
        if (l % a != 0 && l % b != 0)
        {
            ans = 1;
        }
        else
        {
            for (int x = 0; x <= 10; x++)
            {
                for (int y = 0; y <= 10; y++)
                {
                    int mm = (int)pow(a, x) * (int)pow(b, y);
                    if (l % mm == 0)
                        ans++;
                }
            }
        }
        cout << ans << " " << t << endl;
    }

    return 0;
}