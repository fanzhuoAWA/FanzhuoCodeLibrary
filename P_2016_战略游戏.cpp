#include <vector>
#include <iostream>
#include <math.h>
using namespace std;
int f[1505][2];
vector <int> a[1505];
int n;
void dfs(int u, int fat)
{
	for(int i = 0; i < a[u].size(); i++)
	{
		if(a[u][i] == fat)
		{
			continue;
		}
		dfs(a[u][i], u);
		f[u][0] += f[a[u][i]][1];
		f[u][1] += min(f[a[u][i]][0], f[a[u][i]][1]);
	}
}
int main()
{
	scanf("%d", &n);
	for(int i = 0; i <= n - 1; i++)
	{
		f[i][0] = 0;
		f[i][1] = 1;
	}
	for(int i = 0; i <= n - 1; i++)
	{
		int u, k;
		scanf("%d%d", &u, &k);
		for(int j = 1; j <= k; j++)
		{
			int v;
			scanf("%d", &v);
			a[u].push_back(v);
			a[v].push_back(u);
		}
	}
	dfs(0, -1);
	cout << min(f[0][0], f[0][1]);
	return 0;
}