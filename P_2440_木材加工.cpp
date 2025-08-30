#include <iostream>
#define ll long long
using namespace std;
ll a[100005], n, k;
bool check(int mid)
{
    if(mid == 0)
    {
        return true;
    }
    ll cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        cnt += (a[i] / mid);
    }
    return cnt >= k;
}
int main()
{
    ll l = 1, r = 100000005, ans = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    while(l <= r)
    {
        ll mid = (l + r) >> 1;
        if(check(mid))
        {
            l = mid + 1;
            ans = mid;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans;
    return 0;
}