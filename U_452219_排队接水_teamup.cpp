#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
struct a
{
    ll t, v;
}stu[200005];
bool cmp(a x, a y)
{
    return x.t * 1.0 / (x.v * 1.0) < y.t * 1.0 / (y.v * 1.0);
}
int main()
{
    ll n, ans = 0, time = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        scanf("%d%d", &stu[i].t, &stu[i].v);
    }
    sort(stu + 1, stu + n + 1, cmp);
    for(int i = 1; i <= n; i++)
    {
        ans += (stu[i].v * time);
        time += stu[i].t;
    }
    cout << ans;
    return 0;
}