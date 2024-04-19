#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    bool isEasy = true;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i])
            isEasy = false;
    }
    if (isEasy)
        cout << "EASY";
    else
        cout << "HARD";
    return 0;
}