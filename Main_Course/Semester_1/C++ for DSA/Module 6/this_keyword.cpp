#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
        string name;
        int age;
        int mark1;
        int mark2;
        Person(string name,int ag,int m1,int m2)
        {
            // (*this).name = name;
            this->name = name;
            age = ag;
            mark1 = m1;
            mark2 = m2;
        }
        void total_mark()
        {
            cout << mark1 + mark2;
        }
};
int main()
{
    Person rakib("Rakib Ahmed", 24, 85, 95);
    cout << rakib.name << " " << rakib.age << " " << rakib.mark1 << " " << rakib.mark2 << endl;
    rakib.total_mark();
    return 0;
}