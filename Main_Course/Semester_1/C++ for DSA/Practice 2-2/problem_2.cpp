#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        int marks;
        cin >> name >> roll >> marks;
        arr[i].name = name;
        arr[i].roll = roll;
        arr[i].marks = marks;
    }
    int i=0, j=n-1;
    while (i<j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = n-1; j >= 0;j--)
    //     {
    //         swap(arr[i], arr[j]);
    //     }
    // }
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}