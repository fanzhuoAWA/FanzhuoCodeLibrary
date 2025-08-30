#include <iostream>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
    ll k, n, e, d;
    scanf("%lld", &k);
    for(ll i = 1; i <= k; ++i)
    {
        scanf("%lld%lld%lld", &n, &d, &e);
        ll m = n - e * d + 2;
        ll l = 1, r = (m+ 2) / 2;
        while(l < r)
        {
            ll mid = (l + r) / 2;
            if(mid * (m - mid) >= n)
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        if(l * (m - l) == n)
		{
			printf("%lld %lld\n", l, (m - l));
		}
		else
		{
			printf("NO\n");
		}
    }
    return 0;
}