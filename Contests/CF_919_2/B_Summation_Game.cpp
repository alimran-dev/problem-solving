#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        int k, x;
        cin >> n >> k >> x;
        vector<int> arr;
        while (n--)
        {
            int a;
            cin >> a;
            arr.push_back(a);
        }
        while (k--)
        {
            arr.pop_back();
        }
        for (int i = arr.size()-x; i < arr.size(); i++)
        {
            arr[i] = arr[i] * (-1);
        }
        long long int sum=0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }
    
    return 0;
}