#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            myList.push_front(v);
        }
        else if (x == 1)
        {
            myList.push_back(v);
        }
        else if (x == 2 && v < myList.size())
        {
            myList.erase(next(myList.begin(), v));
        }
        cout << "L -> ";
        for (int val : myList)
        {
            cout << val << " ";
        }
        cout << endl;
        myList.reverse();
        cout << "R -> ";
        for (auto it = myList.begin(); it != myList.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
        myList.reverse();
    }

    return 0;
}