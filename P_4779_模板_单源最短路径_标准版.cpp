// #include <iostream>
// #include <vector>
// #include <queue>
// #define long long int
// using namespace std;
// int n, m, s;
// vector <pair<int, int>> G[200005];
// priority_queue <pair<int, int>> pq;
// int jl[200005];
// bool vis[200005];
// signed main()
// {
//     cin >> n >> m >> s;
//     for(int i = 1; i <= m; i++)
//     {
//         int u, v, w;
//         cin >> u >> v >> w;
//         G[u].push_back({v, w});
//     }
//     for(int i = 1; i <= m; i++)
//     {
//         jl[i] = 0x3f3f3f3f;
//         vis[i] = false;
//     }
//     jl[s] = 0;
//     pq.push({-jl[s], s});
//     while(!pq.empty())
//     {
//         int u = pq.top().second;
//         pq.pop();
//         if(vis[u])
//         {
//             continue;
//         }
//         vis[u] = true;
//         for(auto i : G[u])
//         {
//             int v = i.first;
//             int w = i.second;
//             if(jl[u] + w < jl[v])
//             {
//                 jl[v] = jl[u] + w;
//                 pq.push({-jl[v], v});
//             }
//         }
//     }
//     for(int i = 1; i <= n; i++)
//     {
//         cout << jl[i] << " ";
//     }
//     return 0;
// }//上面的是2025.6.7新写的，下面的是2024.12.28写的
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
        cout << dis[i] << " ";
    }
    return 0;
}