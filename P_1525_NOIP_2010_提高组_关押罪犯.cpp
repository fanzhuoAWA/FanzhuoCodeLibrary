#include <iostream>
#include <vector>
using namespace std;
int n, m;
vector <pair<int, int>> wth[300005];
int x, f[40005];
/*void dfs(int u, int c)
{
    if(color[u] !- 0)
    {
        if(color[u] != c)
        {
            fan = false;
        }
        return;
    }
    color[u] = c;
    for(auto a : wth[u])
    {
        int v = a.first;
        int w = a.second;
        if(w <= x)
        {
            return;
        }
        dfs(v, 3 - c);
    }
}*/
int find(int x)
{
	if(f[x] == x)
	{
		return x;
	}
	return f[x] = find(f[x]);
}
void un(int u, int v)
{
    u = find(u);
    v = find(v);
    f[u] = v;
}
bool check(int x)
{
    for(int i = 1; i <= 2 * n; i++)
    {
        f[i] = i;
    }
    for(int u = 1; u <= n; u++)
    {
        for(int i = 0; i < wth[u].size(); i++)
        {
            int v = wth[u][i].first;
            int w = wth[u][i].second;
            if(w <= x)
            {
                continue;
            }
            un(u, v + n);
            un(u + n, v);
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(find(i) == find(i + n))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        wth[u].push_back({v, w});
        wth[v].push_back({u, w});
    }
    int l = 0, r = 1e9;
    while(l < r)
    {
        int mid = (l + r) / 2;
        if(check(mid))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l;
    return 0;
}