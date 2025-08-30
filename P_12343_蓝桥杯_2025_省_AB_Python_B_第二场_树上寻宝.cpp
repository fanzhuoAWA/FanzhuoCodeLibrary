#include <iostream>
#include <vector>
#define ll long long
using namespace std;
ll n, k, w[100005], ans, dep[100005];
vector <int> G[100005];
void dfs(int u, int fa)
{
    for(auto v : G[u])
    {
        if(v != fa)
        {
            dep[v] = dep[u] + 1;
            dfs(v, u);
        }
    }
}
int main()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> w[i];
    }
    for(int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    dfs(1, 0);
    for(int i = 1; i <= n; i++)
    {
        if(dep[i] <= 2 * k)
        {
            ans += w[i];
        }
    }
    cout << ans;
    return 0;
}