#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int h, a, b;
        cin >> h >> a >> b;
        if(a<b){
            if(a>h)
            {
                cout << 1 << endl;
            }
            else
            cout << "Impossible" << endl;
        }
        else{
            int min = ceil((h-a) / ((a - b) / 2));
            if(min%2==1 && (min*((a-b)/2))+a<h){
                min += 2;
            }
            else
                min += 1;
            cout << min << endl;
        }
    }
    
    return 0;
}