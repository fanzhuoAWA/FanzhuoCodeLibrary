#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, q, dp[110][110];
struct node
{
	int v, w;
	node(int v_, int w_):v(v_), w(w_){}
};
vector <node> g[110];
void dfs(int u, int fa)
{
	for(int i = 0; i < g[u].size(); i++)
	{
		int v = g[u][i].v;
		if(v == fa)
		{
			continue;
		}
		dfs(v, u);
		for(int j = q; j >= 1; j--)
		{
			for(int k = j - 1; k >= 0; k--)
			{
				dp[u][j] = max(dp[u][j], dp[u][j - k - 1] + dp[v][k] + g[u][i].w);
			}
		}
	}
	return;
}
int main()
{
	cin >> n >> q;
	for(int i = 1, u, v, w; i < n; i++)
	{
		cin >> u >> v >> w;
		g[u].push_back(node(v, w));
		g[v].push_back(node(u, w));
	}
	dfs(1, 0);
	cout << dp[1][q];
	return 0;
}