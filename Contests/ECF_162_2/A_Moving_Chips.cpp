#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, steps = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int f = -1, l = -1;
        for (int i = 0; i <n ; i++)
        {
            if(arr[i])
            {
                f = i;
                break;
            }
        }
        for (int j = n-1; j>=0; j--)
        {
            if(arr[j])
            {
                l = j;
                break;
            }
        }
        int i = f, j = l;
        while (i<=l && j>=f)
        {
            if(arr[i]==0)
            {
                swap(arr[i], arr[f]);
                f++;
                steps++;
            }
            if(arr[j]==0)
            {
                swap(arr[j], arr[l]);
                l--;
                steps++;
            }
            i++;
            j--;
        }
        cout << steps << endl;
    }
    
    return 0;
}