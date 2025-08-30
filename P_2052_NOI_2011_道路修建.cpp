#include <iostream>
#include <vector>
using namespace std;
vector <pair<int, int>> wth[1000005];//first is zhong, second is long;
int cnt[1000005], n;
long long money;
void dfs(int now, int f, int n_1)
{
    cnt[now] = 1;
    for(auto a : wth[now])
    {
        int v = a.first;
        int w = a.second;
        if(v == f)
        {
            continue;
        }
        dfs(v, now, w);
        cnt[now] += cnt[v];
    }
    long long cnt2  = (long long) abs(cnt[now] - n + cnt[now]) * n_1;
    money += cnt2;
}
int main()
{
    scanf("%d", &n);
    for(int i = 1; i < n; i++)
    {
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        wth[u].push_back({v, w});
        wth[v].push_back({u, w});
    }
    dfs(1, 0, 0);
    cout << money;
    return 0; 
}