#include <iostream>
#define ll long long
using namespace std;
ll n, m, a[100005], l = 1, r;
ll check(ll mid)
{
    ll d = 1, cnt = 0;
    for(ll i = 1; i <= n; i++)
    {
        if(cnt + a[i] > mid)
        {
            d++;
            cnt = a[i];
        }
        else
        {
            cnt += a[i];
        }
        if(cnt > mid)
        {
            return m + 1;
        }
    }
    return d;
}
int main()
{
    cin >> n >> m;
    for(ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        r += a[i];
    }
    while(l < r)
    {
        ll mid = (l + r) / 2;
        ll fan = check(mid);
        if(fan > m)
        {
            l = mid + 1;
        }
        else
        {
            r = mid;
        }
    }
    cout << l;
    return 0;
}