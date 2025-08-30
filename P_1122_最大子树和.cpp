// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int n, dp[16005], a[16005];
// vector <int> g[16005];
// void dfs(int u, int fa)
// {
//     dp[u] = a[u];
// 	for(auto v : g[u])
// 	{
// 		if(v == fa)
// 		{
// 			continue;
// 		}
// 		dfs(v, u);
// 		dp[u] = max(dp[u], dp[u] + dp[v]);
// 	}
//     dp[u] = max(dp[u], 0);
// }
// int main()
// {
// 	cin >> n;
//     for(int i = 1; i <= n; i++)
//     {
//         cin >> a[i];
//     }
//     if(*max_element(a + 1, a + n + 1) < 0)
//     {
//         cout << *max_element(a + 1, a + n + 1);
//         return 0;
//     }
// 	for(int i = 1; i < n; i++)
// 	{
//         int u, v;
// 		cin >> u >> v;
// 		g[u].push_back(v);
// 		g[v].push_back(u);
// 	}
// 	dfs(1, 0);
// 	cout << *max_element(dp + 1, dp + n + 1);
// 	return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, f[16005], s[16005], maxn = -1e9;
vector <int> G[16005];
void dfs(int fa, int u)
{
	f[u] = s[u];
	for(auto v : G[u])
	{
		if(v == fa)
		{
			continue;
		}
		dfs(u, v);
		f[u] = max(f[u], f[u] + f[v]);
	}
	f[u] = max(f[u], 0);
}
int main()
{
	cin >> n;
	int smaxn = -1e9;
	for(int i = 1; i <= n; i++)
	{
		cin >> s[i];
		smaxn = max(s[i], smaxn);
	}
	if(smaxn < 0)
	{
		cout << smaxn;
		return 0;
	}
	for(int i = 1; i < n; i++)
	{
		int v, u;
		cin >> u >> v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	dfs(0, 1);
	for(int i = 1; i <= n; i++)
	{
		maxn = max(maxn, f[i]);
	}
	cout << maxn;
	return 0;
}