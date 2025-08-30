// #include <iostream>
// #include <algorithm>
// using namespace std;
// int dis[1010][1010];
// int main()
// {
//     int n, m, ans;
//     cin >> n >> m;
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j <= n; j++)
//         {
//             dis[i][j] = (j == i ? 0 : 0x3F3F3F3F);
//         }
//     }
//     for(int i = 1; i <= m; i++)
//     {
//         int u, v, w;
//         cin >> u >> v >> w;
//         dis[u][v] = min(w, dis[u][v]);
//     }
//     for(int k = 1; k <= n; k++)
//     {
//         for(int i = 1; i <= n; i++)
//         {
//             for(int j = 1; j <= n; j++)
//             {
//                 dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
//             }
//         }
//     }
//     for(int i = 1; i <= n; i++)
//     {
//         ans += dis[1][i] + dis[i][1];
//     }
//     cout << ans;
//     return 0;
// }
#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;
vector <pair<int, ll>> wth[300005];
int n, m, s = 1;
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
vector <pair<int, ll>> wth2[300005];
ll dis2[300005];
bool vis2[300005];
priority_queue <pair<ll, int>> pq2;
void dijkstra2()
{
    for(int i = 1; i <= n; i++)
    {
        dis2[i] = 0x3F3F3F3F3F3F3F3FLL;
        vis2[i] = false;
    }
    dis2[s] = 0;
    pq2.push({-dis2[s], s});
    while(!pq2.empty())
    {
        int u = pq2.top().second;
        pq2.pop();
        if(vis2[u])
        {
            continue;
        }
        vis2[u] = true;
        for(auto a : wth2[u])
        {
            int v = a.first;
            int w = a.second;
            if(dis2[u] + w < dis2[v])
            {
                dis2[v] = dis2[u] + w;
                pq2.push({-dis2[v], v});
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        wth[u].push_back({v, w});
        wth2[v].push_back({u, w});
    }
    dijkstra();
    dijkstra2();
    ll sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += dis[i];
        sum += dis2[i];
    }
    cout << sum;
    return 0;
}