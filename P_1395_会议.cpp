#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> wth[1000005];
int cnt[1000005], n, ans1, anz[1000005];
/*void dfs(int now, int f)
{
    cnt[now] = 1;
    for(auto v : wth[now])
    {
        if(v == f)
        {
            continue;
        }
        dfs(v, now);
        if(n - cnt[v] == cnt[now] || abs(cnt[v] - n + cnt[now]) <= 1)
        {
            ans1 = v;
        }
        cnt[now] += cnt[v];
    }
}*/
void dfs(int now, int f, int dep)
{
    anz[1] += dep;
    cnt[now] = 1;
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
long long anz1, anz2;
void dfs2(int now, int f)
{
    
    if(f != 0)
    {
        anz[now] = anz[f] - cnt[now] + (n - cnt[now]);
    }
    for(auto v : wth[now])
    {
        if(v == f)
        {
            continue;
        }
        dfs2(v, now);
    }
    if(anz[now] < anz2)
    {
        anz1 = now;
        anz2 = anz[now];
    }
    else if(anz[now] == anz2)
    {
        anz1 = min(anz1, (long long) now);
    }
}
int main()
{
    scanf("%d", &n);
    for(int i = 1; i < n; i++)
    {
        int u, v;
        scanf("%d%d", &u, &v);
        wth[u].push_back(v);
        wth[v].push_back(u);
    }
    anz1 = 0x3F3F3F3F3F3F3F3FLL;
    anz2 = 0x3F3F3F3F3F3F3F3FLL;
    dfs(1, 0, 0);
    dfs2(1, 0);
    cout << anz1 << " " << anz2;
    return 0; 
}