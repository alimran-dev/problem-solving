#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        arr[i] = a;
    }
    int a = 0, d = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d)
        cout << "Anton";
    else if(a<d)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}