#include <bits/stdc++.h>
using namespace std;

void print(int n, char c)
{
    for (int i = 0; i < n; i++)
    {
        cout << c << " ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        char c;
        cin >> n;
        cin.ignore();
        cin >> c;
        print(n, c);
    }

    return 0;
}