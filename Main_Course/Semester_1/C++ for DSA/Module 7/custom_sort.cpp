#include<bits/stdc++.h>
using namespace std;

class Freq
{
    public:
        char value;
        int count;
};
bool cmp(Freq a,Freq b)
{
    if(a.count!=b.count)
    {
    return a.count > b.count;
    }
    else
    {
        return a.value < b.value;
    }
}
int main()
{
    string s;
    cin >> s;
    Freq a[26];
    for (int i = 0; i < 26; i++)
    {
        a[i].value = char(i + 'a');
        a[i].count = 0;
    }
    for(char c:s)
    {
        int ind = c - 'a';
        a[ind].count++;
    }
    sort(a, a + 26, cmp);
    for (int i = 0; i < 26; i++)
    {
        if(a[i].count)
        for (int j = 0; j < a[i].count; j++)
        {
            cout << a[i].value;
        }
    }
    
    return 0;
}