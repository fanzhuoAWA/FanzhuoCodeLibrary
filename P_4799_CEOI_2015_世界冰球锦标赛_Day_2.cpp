#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
const int N = 40;
const int M = 1 << (N >> 1);
ll n, m, t[N + 10], sum[M + 10], sum2[M + 10], cnt, cnt2, ans;
void dfs(int l, int r, ll res)
{
	if(l == r)
	{
		if(r == (n >> 1))
		{
			sum[++cnt] = res;
		}
		else
		{
			sum2[++cnt2] = res;
		}
		return;
	}
	if(res + t[l + 1] <= m)
	{
		dfs(l + 1, r, res + t[l + 1]);
	}
	dfs(l + 1, r, res);
	return;
}
int main()
{
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> t[i];
	}
	dfs(0, n >> 1, 0);
	dfs(n >> 1, n ,0);
	sort(sum + 1, sum + cnt + 1);
	for(int i = 1; i <= cnt2; i++)
	{
		ans += upper_bound(sum + 1, sum + cnt + 1, m- sum2[i]) - sum - 1;
	}
	cout << ans;
	return 0;
}