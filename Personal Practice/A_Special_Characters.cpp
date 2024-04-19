/*
-----------------------------
Author: Md. Al Imran
Created: 14-04-2024 10:33:25
File: A_Special_Characters.cpp
-----------------------------
*/
#include <bits/stdc++.h>
#define ll long long int
#define endl '\n'
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll tc; cin>>tc; while(tc--)
    {
        ll n; cin>>n;
        if(n%2)
        {
            no;
            continue;
        }
        yes;
        for(ll i=0;i<n/2;i++)
            (i%2) ? cout<<"BB":cout<<"AA";
        cout<<endl;
    }
    return 0;
}