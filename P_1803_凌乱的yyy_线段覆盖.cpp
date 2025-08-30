#include <iostream>
#include <algorithm>
using namespace std;
struct fyc
{
    int begin, end;
}a[1000005];
bool cmp(fyc x, fyc y)
{
    return x.end < y.end;
}
int main()
{
    int n, ans = 1;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i].begin >> a[i].end;
    }
    sort(a + 1, a + n + 1, cmp);
    int l = 1, r = n;
    int m = a[1].end;
    while(l <= r)
    {
        l++;
        int mid = (l + r) / 2;
        if(a[l].begin >= m)
        {
            ans++;
            m = a[l].end;
        }
    }
    cout << ans;
    return 0;
}