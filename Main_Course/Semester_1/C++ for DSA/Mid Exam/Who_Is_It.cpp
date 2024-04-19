#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int marks;
    Student(int i, char n[], char s, int m)
    {
        id = i;
        strcpy(name, n);
        section = s;
        marks = m;
    }
};
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int id;
        char name[101];
        char section;
        int marks;
        cin >> id >> name >> section >> marks;
        Student a(id, name, section, marks);
        cin >> id >> name >> section >> marks;
        Student b(id, name, section, marks);
        cin >> id >> name >> section >> marks;
        Student c(id, name, section, marks);
        if (a.marks != b.marks && a.marks != c.marks && b.marks != c.marks)
        {
            if (a.marks > b.marks && a.marks > c.marks)
            {
                cout << a.id << " " << a.name << " " << a.section << " " << a.marks;
            }
            else if (b.marks > c.marks)
            {
                cout << b.id << " " << b.name << " " << b.section << " " << b.marks;
            }
            else if (c.marks > b.marks)
            {
                cout << c.id << " " << c.name << " " << c.section << " " << c.marks;
            }
        }
        else
        {
            if (a.marks == b.marks && b.marks == c.marks && a.marks == c.marks)
            {
                cout << a.id << " " << a.name << " " << a.section << " " << a.marks;
            }
            else if (a.marks == b.marks && a.marks > c.marks)
            {
                cout << a.id << " " << a.name << " " << a.section << " " << a.marks;
            }
            else if (a.marks == b.marks && a.marks < c.marks)
            {
                cout << c.id << " " << c.name << " " << c.section << " " << c.marks;
            }
            else if (b.marks == c.marks && b.marks > a.marks)
            {
                cout << b.id << " " << b.name << " " << b.section << " " << b.marks;
            }
            else if (b.marks == c.marks && b.marks < a.marks)
            {
                cout << a.id << " " << a.name << " " << a.section << " " << a.marks;
            }
            else if (a.marks == c.marks && a.marks > b.marks)
            {
                cout << a.id << " " << a.name << " " << a.section << " " << a.marks;
            }
            else if (a.marks == c.marks && a.marks < b.marks)
            {
                cout << b.id << " " << b.name << " " << b.section << " " << b.marks;
            }
        }
        cout << endl;
    }

    return 0;
}
