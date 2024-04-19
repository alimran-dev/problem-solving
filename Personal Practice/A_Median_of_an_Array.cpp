/*
-----------------------------
Author: Md. Al Imran
Created: 14-04-2024 10:41:39
File: A_Median_of_an_Array.cpp
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
        vector<ll> v(n);
        for(ll i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        int k;
        (n%2) ? k=(n/2)+1:k=n/2;
        int cnt=1;
        v[k-1]++;
        for(ll i=k;i<n;i++)
        {
            while(v[i]<v[i-1])
            {
                v[i]++;
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}