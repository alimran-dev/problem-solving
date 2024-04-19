#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    int mark;
};
bool cmp(Student a, Student b)
{
    // if (a.mark <= b.mark)
    //     return true;
    // else
    //     return false;
    // return a.mark <= b.mark;
    if(a.mark!=b.mark)
        return a.mark < b.mark;
        else
            return a.age < b.age;
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].age >> a[i].mark;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].age << " " << a[i].mark << endl;
    }

    return 0;
}