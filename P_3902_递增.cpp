#include <iostream>
#include <algorithm>
using namespace std;
int a[100005], f[100005];
int main()
{
    int n, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] = 2e9;
    }
    f[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        int sum = lower_bound(f + 1, f + n + 1, a[i]) - f;
        f[sum] = a[i];
        ans = max(ans, sum);
    }
    cout << n - ans;
    return 0;
}