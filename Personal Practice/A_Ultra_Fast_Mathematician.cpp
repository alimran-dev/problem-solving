#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s1[105];
    char s2[105];
    char s3[105];
    cin >> s1 >> s2;
    for (int i = 0; i < 105; i++)
    {
        if (s1[i] == '\0' || s1[i] == '\n')
        {
            s3[i] = '\0';
            break;
        }
        if (s1[i] == s2[i])
            s3[i] = '0';
        else
            s3[i] = '1';
    }
    cout << s3;
    return 0;
}