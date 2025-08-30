#include <iostream>
#include <algorithm>
using namespace std;
long long panz[100005];
int main()
{
    long long n, m, p1, s1, s2, loon = 0, hu = 0, minn, mi;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> panz[i];
    }
    cin >> m >> p1 >> s1 >> s2;
    panz[p1] += s1;
    for(int i = 1; i < m; i++)
    {
        loon += panz[i] * abs(m - i);
    }
    for(int i = m + 1; i <= n; i++)
    {
        hu += panz[i] * abs(m - i);
    }
    minn = abs(loon - hu), mi = m;
    for(int i = 1; i <= n; i++)
    {
        if(i < m)
        {
            if(abs((loon +  s2 * abs(m - i)) - hu) < minn)
            {
                minn = abs((loon +  s2 * abs(m - i)) - hu);
                mi = i;
            }
        }
        else if(i > m)
        {
            if(abs((hu + s2 * abs(m - i)) - loon) < minn)
            {
                minn = abs((hu + s2 * abs(m - i)) - loon);
                mi = i;
            }
        }
    }
    cout << mi;
    return 0;
}