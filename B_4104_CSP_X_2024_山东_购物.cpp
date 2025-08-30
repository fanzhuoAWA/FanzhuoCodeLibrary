#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
ll a[200005];
bool cmp(ll x, ll y)
{
    return x > y;
}
int main()
{
    ll n, m, w, ans = 0, cnt = 0;
    cin >> n >> m >> w;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1, cmp);
    for(int i = 1; i <= n; i++)
    {
        cnt += a[i];
        if(i % m == 0)
        {
            ans += min(cnt, w);
            cnt = 0;
        }
    }
    if(cnt >= w)
    {
        ans += w;
    }
    else
    {
        ans += cnt;
    }
    cout << ans;
    return 0;
}