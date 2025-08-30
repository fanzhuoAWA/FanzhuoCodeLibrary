#include <iostream>
#include <algorithm>
using namespace std;
int a[1000005];
int main()
{
    int w, n, ans = 0;
    cin >> w >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    int l = 1, r = n;
    while(l <= r)
    {
        if(a[l] + a[r] <= w)
        {
            ans++;
            l++;
            r--;
        }
        else
        {
            r--;
            ans++;
        }
    }
    cout << ans;
    return 0;
}