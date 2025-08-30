#include <iostream>
#define ll long long
using namespace std;
ll sum[4000005], a[4000005];
int main()
{
    ll n, m, z = 0, y = 0, h = 0;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    for(int i = 1; i <= n; i++)
    {
        int l = i, r = n;
        while(l <= r)
        {
            int mid = (l + r) / 2;
            if(sum[mid] - sum[i - 1] > m)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if(sum[r] - sum[i - 1] <= m)
        {
            if(sum[r] -sum[i - 1] > h)
            {
                z = i;
                y = r;
                h = sum[r] - sum[i - 1];
            }
        }
    }
    cout << z << " " << y << " " << h;
    return 0;
}