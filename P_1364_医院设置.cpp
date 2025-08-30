/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> wth[105];
int ans = 1e9, cnt[105], hz[105];
int a[105];
void dfs(int now, int f, int dep, int rt)
{
    cnt[now] = hz[now];
    a[rt] += hz[now] * dep;
    for(auto v : wth[now])
    {
        if(v == f)
        {
            continue;
        }
        dfs(v, now, dep + 1, rt);
        cnt[now] += cnt[v];
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int u, v, w;
        cin >> w >> u >> v;
        hz[i] = w;
        if(u != 0)
        {
            wth[i].push_back(u);
            wth[u].push_back(i);
        }
        if(v != 0)
        {
            wth[i].push_back(v);
            wth[v].push_back(i);
        }
    }
    for(int i = 1; i <= n; i++)
    {
        dfs(i, 0, 0, i);
        ans = min(ans, a[i]);
    }
    cout << ans;
    return 0;
}*/
//高级写法=D
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> wth[105];
int ans = 1e9, cnt[105], hz[105];
int a[105];
void dfs(int now, int f, int dep)
{
    cnt[now] = hz[now];
    a[1] += hz[now] * dep;
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
    ans = min(ans, a[u]);
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
    for(int i = 1; i <= n; i++)
    {
        int u, v, w;
        cin >> w >> u >> v;
        hz[i] = w;
        if(u != 0)
        {
            wth[i].push_back(u);
            wth[u].push_back(i);
        }
        if(v != 0)
        {
            wth[i].push_back(v);
            wth[v].push_back(i);
        }
    }
    dfs(1, 0, 0);
    dfs2(1, 0);
    cout << ans;
    return 0;
}