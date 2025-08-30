#include <iostream>
#include <vector>
using namespace std;
const int INF = 1e9;
vector<pair<int, int>> G[2005];
int dis[2005];
int n, m;
int u, v, w;
void addEdge(int u, int v, int w)
{
    G[u].emplace_back(v, w); // 不用加{}版的push_back()
}
bool run(int st)
{
    fill(dis, dis + 1 + n, INF);
    dis[st] = 0;
    bool cycle = false;
    for (int i = 1; i <= n; i++)
    {
        bool relaxed = false;
        for (int u = 1; u <= n; u++)
        {
            if (dis[u] = INF)
            {
                continue;
            }
            for (auto a : G[u])
            {
                int v = a.first;
                int w = a.second;
                if (dis[u] + w < dis[v])
                {
                    dis[v] = dis[u] + w;
                    relaxed = true;
                }
            }
        }
        if (i == n && relaxed)
        {
            cycle = true;
        }
        if (!relaxed)
        {
            break;
        }
    }
    return cycle;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n >> m;
        for (int i = 1; i <= m; i++)
        {
            cin >> u >> v >> w;
            if (w >= 0)
            {
                G[u].emplace_back(v, w);
                G[v].emplace_back(u, w);
            }
            else
            {
                G[u].emplace_back(v, w);
            }
        }
        cout << (run(1) ? "YES\n" : "NO\n");
        for (int i = 1; i <= n; i++)
        {
            G[i].clear();
        }
    }
    return 0;
}