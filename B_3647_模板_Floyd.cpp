#include <iostream>
#include <algorithm>
using namespace std;
int dis[510][510];
int main()
{
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            dis[i][j] = (j == i ? 0 : 0x3F3F3F3F);
        }
    }
    for(int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        dis[u][v] = min(w, dis[u][v]);
        dis[v][u] = min(w, dis[v][u]);
    }
    for(int k = 1; k <= n; k++)
    {
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cout << dis[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}