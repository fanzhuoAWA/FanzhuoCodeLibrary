#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
long long xx[1005], yy[1005];
int main()
{
    long long t, n; 
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++)
        {
            cin >> xx[i] >> yy[i];
        }
        sort(xx + 1, xx + n + 1);
        sort(yy + 1, yy + n + 1);
        if(n % 2 != 0)
        {
            cout << "1\n";
            continue;
        }
        cout << (xx[n / 2 + 1] - xx[n / 2] + 1) * (yy[n / 2 + 1] - yy[n / 2] + 1) << "\n";
    }
    return 0;
}