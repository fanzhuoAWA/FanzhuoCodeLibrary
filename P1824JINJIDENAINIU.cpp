#include <iostream>
#include <algorithm>
using namespace std;
int n, c, a[100005];
bool check(int x)
{
    int sum = 0;
    int lst = -1e9;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] - lst >= x)
        {
            lst = a[i];
            sum++;
        }
    }
    return sum >= c;
}
int main()
{   
    int l = 1, r = 0, mid, ans = 0;
    cin >> n >> c;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        r = max(a[i], r);
    }
    sort(a + 1, a + n + 1);
    while(l <= r)
    {
        mid = (l + r) / 2;
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