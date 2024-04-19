#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;
    while (true)
    {
        int a;
        cin >> a;
        if (a == -1)
            break;
        myList.push_back(a);
    }
    myList.sort();
    myList.unique();
    for (int val : myList)
    {
        cout << val << " ";
    }

    return 0;
}