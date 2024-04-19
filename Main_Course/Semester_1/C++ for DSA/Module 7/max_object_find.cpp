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
    Student mx;
    mx.mark = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (mx.mark < a[i].mark)
        {
            mx = a[i];
        }
    }
    cout << mx.name << " " << mx.age << " " << mx.mark << endl;

    return 0;
}