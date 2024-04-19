#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Write your code here
    char s[1000001];
    while (cin.getline(s, 1000001))
    {
        sort(s, s + strlen(s));
        for (int i = 0; s[i]!='\0'; i++)
        {
            if (s[i] == ' ')
                continue;
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
