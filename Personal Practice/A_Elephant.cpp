#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, steps = 0;
    cin >> x;
    int q;
    q = x / 5;
    x = x % 5;
    steps += q;
    q = x / 4;
    x = x % 4;
    steps += q;
    q = x / 3;
    x = x % 3;
    steps += q;
    q = x / 2;
    x = x % 2;
    steps += q;
    q = x / 1;
    x = x % 1;
    steps += q;
    cout << steps;
    return 0;
}