#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0, b = 1,tmp;
    for (int i = 0; i < n; i++)
    {
        if(i<2)
            cout << i << " ";
        else
        {
            cout << a + b << " ";
            tmp = a;
            a = b;
            b = tmp + b;
        }
    }
    
    return 0;
}