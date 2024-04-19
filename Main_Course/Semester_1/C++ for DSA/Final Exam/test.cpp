#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 3, j = 5;
    string x = "ok";
    s.replace(i, j, x);
    cout << s;
    return 0;
}