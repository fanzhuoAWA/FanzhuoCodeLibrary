#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define N 100005
using namespace std;
int n, m, f[N], din[N];
vector <int> G[N];
queue <int> q;
int main()
{
    scanf("%d%d", &n, &m);
    for(int i = 1, u, v; i <= m; i++)
    {
        scanf("%d%d", &u, &v);
        G[u].push_back(v);
        din[v]++;
    }
    for(int i = 1; i <= n; i++)
    {
        if(din[i] == 0)
        {
            q.push(i);
        }
    }
    while(q.size())
    {
        int u = q.front();
        q.pop();
        for(auto v : G[u])
        {
            f[v] = max(f[u] + 1, f[v]);
            if(!--din[v])
            {
                q.push(v);
            }
        }
        // for(auto v : G[u])
        // {
        //     if(din[v] == 0)
        //     {
        //         q.push(v);
        //         f[v] = 1;
        //     }
        // }
    }
    for(int i = 1; i <= n; i++)
    {
        cout << f[i] + 1 << '\n';
    }
    return 0;
}