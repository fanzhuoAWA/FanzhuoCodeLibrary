#include <vector>
#include <iostream>
#include <math.h>
using namespace std;
int f[6005][2], hap[6005];
vector <int> a[6005];
int n;
void dfs(int u, int fat)
{
    f[u][0] = 0;
	f[u][1] = hap[u];
	for(int i = 0; i < a[u].size(); i++)
	{
		if(a[u][i] == fat)
		{
			continue;
		}
		dfs(a[u][i], u);
		f[u][0] += max(f[a[u][i]][1], f[a[u][i]][0]);//丧尸不来，下属来or不来
		f[u][1] += f[a[u][i]][0];//丧尸来，下属不来
	}
}
int main()
{
	scanf("%d", &n);
    for(int i = 1; i <= n; i++)
	{
		cin >> hap[i];
	}
	for(int i = 1; i < n; i++)
	{
		int u, k;
		scanf("%d%d", &u, &k);
		a[u].push_back(k);
		a[k].push_back(u);
	}
	dfs(1, 0);
	cout << max(f[1][0], f[1][1]);
	return 0;
}