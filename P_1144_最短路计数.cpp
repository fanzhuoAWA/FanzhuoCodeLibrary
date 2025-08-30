#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;
vector <int> wth[1000006];
int n, m, s = 1;
ll dis[1000006];
bool vis[1000006];
ll num[1000006];
queue <int> pq;
const int mod = 100003;
void dijkstra()
{
    for(int i = 1; i <= n; i++)
    {
        dis[i] = 0x3F3F3F3F3F3F3F3FLL;
        vis[i] = false;
    }
    dis[s] = 0;
    num[s] = 1;
    pq.push(s);
    while(!pq.empty())
    {
        int u = pq.front();
        pq.pop();
        for(auto v : wth[u])
        {
            int w = 1;
            if(dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
                num[v] = num[u];
                pq.push(v);
                vis[u] = true;
            }
            else
            {
                if(dis[u] + w == dis[v])
                {
                    num[v] = (num[v] + num[u]) % mod;
                }
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int u, v;
        scanf("%d%d", &u, &v);
        wth[u].push_back(v);
        wth[v].push_back(u);
    }
    dijkstra();
    for(int i = 1; i <= n; i++)
    {
        cout << num[i] << "\n";
    }
    return 0;
}