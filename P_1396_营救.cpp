#include <iostream>
#include <vector>
using namespace std;
vector <pair<int, int>> fan[300005];
bool vis[300005];
int n, m, s, t, l = 1, r = 1e9;
void dfs(int u, int ill)
{
    if(vis[u])
    {
        return;
    }
    vis[u] = 1;
    for(auto p : fan[u])
    {
        if(p.second > ill)
        {
            continue;
        }
        dfs(p.first, ill);
    }
}
bool check(int mid)
{
    for(int i = 1; i <= n; i++)
    {
        vis[i] = false;
    }
    dfs(s, mid);
    return vis[t];
}
int main()
{
    cin >> n >> m >> s >> t;
    for(int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        fan[u].push_back({v, w});
        fan[v].push_back({u, w});
    }
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