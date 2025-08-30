#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> wth[1000005];
long long ans = -1e9, cnt[1000005], a[1000005], ani;
void dfs(int now, int f, int dep)
{
    cnt[now] = 1;
    a[1] += cnt[now] * dep;
    for(auto v : wth[now])
    {
        if(v == f)
        {
            continue;
        }
        dfs(v, now, dep + 1);
        cnt[now] += cnt[v];
    }
}
void dfs2(int u, int f)
{
    if(u != 1)
    {
        a[u] = a[f] + (cnt[1] - cnt[u]) - cnt[u];
    }
    if(ans < a[u])
    {
        ans = a[u];
        ani = u;
    }
    for(auto v : wth[u])
    {
        if(v == f)
        {
            continue;
        }
        dfs2(v, u);
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        wth[u].push_back(v);
        wth[v].push_back(u);
    }
    dfs(1, 0, 0);
    dfs2(1, 0);
    cout << ani;
    return 0;
}