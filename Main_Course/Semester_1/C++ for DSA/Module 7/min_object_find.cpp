#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int mark;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].age >> a[i].mark;
    }
    Student mn;
    mn.mark = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (mn.mark > a[i].mark)
        {
            mn = a[i];
        }
    }
    cout << mn.name << " " << mn.age << " " << mn.mark << endl;

    return 0;
}