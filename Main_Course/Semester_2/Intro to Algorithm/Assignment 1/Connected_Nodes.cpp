#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> arr[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a;
        cin >> a;
        if(arr[a].empty())
            cout << -1;
        else
        {
            sort(arr[a].begin(), arr[a].end(), greater<int>());
            for (int i = 0; i < arr[a].size(); i++)
            {
                cout << arr[a][i] << " ";
            }
            
        }
        cout << endl;
    }
    
    return 0;
}