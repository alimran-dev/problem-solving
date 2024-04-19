#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};
int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        string name;
        int cls;
        char section;
        int id;
        cin >> name >> cls >> section >> id;
        arr[i].nm = name;
        arr[i].cls = cls;
        arr[i].s = section;
        arr[i].id = id;
    }
    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(arr[i].s, arr[j].s);
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << endl;
    }

    return 0;
}