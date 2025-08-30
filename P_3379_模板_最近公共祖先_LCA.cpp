#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int FANZHUO = 5e5 + 5;
int cnt;
vector <int> t[FANZHUO];
vector <int> a;
int fo[FANZHUO], lo[FANZHUO], f[FANZHUO];
int dep[FANZHUO];
pair <int, int> pozcerno[FANZHUO];
void dfs(int u, int p)
{
    cnt++;
    fo[u] = cnt;
    a.push_back(u);
    f[u] = p;
    dep[u] = dep[p] + 1;
    for(int v : t[u])
    {
        if(v == p)
        {
            continue;
        }
        dfs(v, u);
    }
    a.push_back(u);
    cnt++;
    lo[u] = cnt;
}
int main()
{
    int n, m, s;
    cin >> n >> m >> s;
    for(int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        t[u].push_back(v);
        t[v].push_back(u);
    }
    dfs(s, s);
    for(int i = 1; i <= m; i++)
    {
        int af, b, x, y, minn = 1e9, mini;
        cin >> af >> b;
        if (fo[af] <= fo[b] && lo[af] >= lo[b])
        {
            cout << af << endl;
            continue;
        }
        if (fo[b] <= fo[af] && lo[b] >= lo[af])
        {
            cout << b << endl;
            continue;
        }
        x = min(fo[b], fo[af]), y = max(lo[b], lo[af]);
        for(int k = x; k <= y; k++)
        {
            if(minn > dep[a[k - 1]])
            {
                minn = dep[a[k - 1]];
                mini = a[k - 1];
            }
        }
        cout << f[mini] << "\n";
    }
    return 0;
}