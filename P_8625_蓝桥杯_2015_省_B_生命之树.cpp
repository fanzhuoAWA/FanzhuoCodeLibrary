#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
vector <long long> e[100005];
long long a[100005], dp[100005], ans;
void dfs(int u, int f)
{
	dp[u] = a[u];
	for(int i = 0; i < e[u].size(); i++)
	{
		int v = e[u][i];
		if(v == f)
		{
			continue;
		}
		dfs(v, u);
		dp[u] += max(0ll, dp[v]);
	}
	return;
}
int main()
{
	long long n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for(int i = 1, u, v; i < n; i++)
	{
		cin >> u >> v;
		e[u].push_back(v);
		e[v].push_back(u);
	}
	dfs(1, 0);
	for(int i = 1; i <= n; i++)
	{
		ans = max(ans, dp[i]);
	}
	cout << ans;
	return 0;
}