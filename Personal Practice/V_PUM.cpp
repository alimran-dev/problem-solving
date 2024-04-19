#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (n--)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << i << " ";
            i++;
        }
        cout << "PUM" << endl;
        i++;
    }
    
    return 0;
}