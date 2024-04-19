#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student a, Student b)
{
    int total_a = a.math_marks + a.eng_marks;
    int total_b = b.math_marks + b.eng_marks;
    if (total_a != total_b)
        return total_a > total_b;
    else
        return a.id < b.id;
}
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
        int math_marks;
        int eng_marks;
        cin >> name >> cls >> section >> id >> math_marks >> eng_marks;
        arr[i].nm = name;
        arr[i].cls = cls;
        arr[i].s = section;
        arr[i].id = id;
        arr[i].math_marks = math_marks;
        arr[i].eng_marks = eng_marks;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    }
    return 0;
}