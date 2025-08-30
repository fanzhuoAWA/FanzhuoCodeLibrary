#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;
vector <pair<int, ll>> wth[300005];
int n, m, s;
ll dis[300005];
bool vis[300005];
priority_queue <pair<ll, int>> pq;
void dijkstra()
{
    for(int i = 1; i <= n; i++)
    {
        dis[i] = 0x3F3F3F3F3F3F3F3FLL;
        vis[i] = false;
    }
    dis[s] = 0;
    pq.push({-dis[s], s});
    while(!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();
        if(vis[u])
        {
            continue;
        }
        vis[u] = true;
        for(auto a : wth[u])
        {
            int v = a.first;
            int w = a.second;
            if(dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
                pq.push({-dis[v], v});
            }
        }
    }
}
int main()
{
    cin >> n >> m >> s;
    for(int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        wth[u].push_back({v, w});
    }
    dijkstra();
    for(int i = 1; i <= n; i++)
    {
        if(dis[i] == 0x3F3F3F3F3F3F3F3FLL)
        {
            cout << ((1LL << 31) - 1LL) << " ";
        }
        else{cout << dis[i] << " ";}
    }
    return 0;
}