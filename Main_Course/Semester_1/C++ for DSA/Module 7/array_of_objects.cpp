#include<bits/stdc++.h>
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
    // Student a[n];
    Student *a = new Student[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].age >> a[i].mark;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].age << " " << a[i].mark << endl;
    }
    delete[] a;
    return 0;
}