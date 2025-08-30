#include <iostream>
#include <algorithm>
using namespace std;
int a[200005], b[200005], n, ans;
long long m;
bool check(int x)
{
    long long num = m;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] + b[i] < x || x - a[i] > num)
        {
            return false;
        }
        else
        {
            num -= max(x - a[i], 0);
        }
    }
    return true;
}
int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 2 * n;
    while(l <= r)
    {
        int mid = l + r >> 1;
        if(check(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans;
    return 0;
}