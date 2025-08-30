#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <pair<int, int>> wth[100005];
long long ans = 0x7fffffffffffffff, cnt[100005], hz[100005];
long long a[100005];
void dfs(int now, int f, int l)
{
    cnt[now] = hz[now];
    a[1] += hz[now] * l;
    for(int i = 0; i < wth[now].size(); i++)
    {
        int v = wth[now][i].first;
        int w = wth[now][i].second;
        if(v == f)
        {
            continue;
        }
        dfs(v, now, l + w);
        cnt[now] += cnt[v];
    }
}
void dfs2(int u, int f, long long pw)
{
    if(u != 1)
    {
        a[u] = a[f] - pw * cnt[u] + pw * (cnt[1] - cnt[u]);
    }
    ans = min(ans, a[u]);
    for(int i = 0; i < wth[u].size(); i++)
    {
        int v = wth[u][i].first;
        int w = wth[u][i].second;
        if(v == f)
        {
            continue;
        }
        dfs2(v, u, w);
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> hz[i];
    }
    for(int i = 1; i < n; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        wth[u].push_back({v, w});
        wth[v].push_back({u, w});
    }
    dfs(1, 0, 0);
    dfs2(1, 0, 0);
    cout << ans;
    return 0;
}