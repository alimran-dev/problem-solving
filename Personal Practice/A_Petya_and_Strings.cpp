#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s1[105], s2[105];
    cin >> s1 >> s2;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] += 32;
        if (s2[i] >= 'A' && s2[i] <= 'Z')
            s2[i] += 32;
    }
    int result = 0;
    for (int i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] < s2[i])
        {
            result = -1;
            break;
        }
        else if (s1[i] > s2[i])
        {
            result = 1;
            break;
        }
    }
    cout << result;
    return 0;
}