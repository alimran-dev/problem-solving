#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks == b.marks)
        {
            if (a.roll > b.roll)
                return true;
            else
                return false;
        }
        else if (a.marks < b.marks)
            return true;
        else
            return false;
    }
};
int main()
{
    int n, q;
    cin >> n;
    priority_queue<Student, vector<Student>, cmp> pq;
    while (n--)
    {
        string nm;
        int r, m;
        cin >> nm >> r >> m;
        Student obj(nm, r, m);
        pq.push(obj);
    }
    cin >> q;
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            string nm;
            int r, m;
            cin >> nm >> r >> m;
            Student x(nm, r, m);
            pq.push(x);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (c == 1)
        {
            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            else
                cout << "Empty" << endl;
        }
        else if (c == 2)
        {
            if (!pq.empty())
                pq.pop();
            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            else
                cout << "Empty" << endl;
        }
    }

    return 0;
}