#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int l;
    cin >> l;
    while(l != 0)
    {
        int r = -1, d = -1, ans = 1e9;
        string s;
        cin >> s;
        for(int i = 0; i < l; i++)
        {
            if(s[i] == 'Z')
            {
                ans = 0;
                break;
            }
            if(s[i] == 'D')
            {
                d = i;
            }
            else if(s[i] == 'R')
            {
                r = i;
            }
            if(r != -1 && d != -1)
            {
                ans = min(abs(r - d), ans);
            }
        }
        cout << ans << "\n";
        cin >> l;
    }
    return 0;
}