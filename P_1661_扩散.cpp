#include <iostream>
#include <algorithm>
using namespace std;
int n;
bool vis[55];
pair<int, pair<int, int>> a[55];
void dfs(int u, int mid)
{
    vis[u] = 1;
    for(int v = 1; v <= n; v++)
    {
        if(vis[v])
        {
            continue;
        }
        if((abs(a[v].second.first - a[u].second.first) + abs(a[v].second.second - a[u].second.second)) > 2 * mid)
        {
            continue;
        }
        dfs(v, mid);
    }
}
bool check(int mid)
{
    for(int i = 1; i <= n; i++)
    {
        vis[i] = 0;
    }
    dfs(1, mid);
    for(int i = 1; i <= n; i++)
    {
        if(!vis[a[i].first])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        a[i].first = i;
        cin >> a[i].second.first >> a[i].second.second;
    }
    int l = 1, r = 2000000000;
    while(l < r)
    {
        int mid = (l + r) / 2;
        if(check(mid))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << l;
    return 0;
}