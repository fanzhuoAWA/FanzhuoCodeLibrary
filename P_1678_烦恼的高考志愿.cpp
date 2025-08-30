#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
ll sc[100005];
int main()
{
    sc[0] = -1e9;
    ll m, n, cnt = 0;
    cin >> m >> n;
    sc[m + 1] = -1e9;
    for(int i = 1; i <= m; i++)
    {
        cin >> sc[i];
    }
    sort(sc + 1, sc + m + 1);
    for(int i = 1; i <= n; i++)
    {
        ll x, l = 1, r = m;
        cin >> x;
        while(l < r)
        {
            ll mid = (l + r) >> 1;
            if(sc[mid] >= x)
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        cnt += min(abs(x - sc[l - 1]), min(abs(x - sc[l + 1]), abs(x - sc[l])));
    }
    cout << cnt;
    return 0;
}