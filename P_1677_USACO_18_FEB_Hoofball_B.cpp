#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// vector <int> cow;
// int ans, zh = 1e9;
// void dfs(int fa, int u)
// {
//     int minn = 1e9, maxn = -1e9;
//     for(int i = 0; i < cow.size(); i++)
//     {
//         int v = cow[i];
//         if(fabs(u - v) < minn)
//         {
//             minn = fabs(u - v);
//             maxn = v;
//         }
//         else if(fabs(u - v) == minn)
//         {
//             if(v > maxn)
//             {
//                 minn = fabs(u - v);
//                 maxn = v;
//             }
//         }
//     }
//     if(maxn == cow[fa])
//     {
//         ans++;
//     }
//     else
//     {
//         dfs(u, maxn);
//     }

// }
int cnt, ans, n;
int main()
{
    cin >> n;
    vector <int> a(n + 1);
    vector <int> deg(n + 1, 0);
    vector <int> nxt(n + 1, 0);
    vector <int> vis(n + 1, 0);
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    if(n <= 2)
    {
        cout << "1";
        return 0;
    }
    sort(begin(a) + 1, end(a));
    deg[2]++;
    nxt[1] = 2;
    deg[n - 1]++;
    nxt[n] = n - 1;
    for(int i = 2; i < n; i++)
    {
        if(a[i] - a[i - 1] <= a[i + 1] - a[i])
        {
            deg[i - 1]++;
            nxt[i] = i - 1;
        }
        else
        {
            deg[i + 1]++;
            nxt[i] = i + 1;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        if(deg[i] == 0 && !vis[i])
        {
            ans++;
            int cur = i;
            while(!vis[cur])
            {
                vis[cur] = 1;
                cnt++;
                cur = nxt[cur];
            }
        }
    }
    ans += (n - cnt) / 2;
    cout << ans;
    // for(int i = 1; i <= n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     cow.push_back(x);
    // }
    // for(int i = 0; i < n; i++)
    // {
    //     ans = 0;
    //     dfs(-1, i);
    //     zh = min(zh, ans);
    // }
    return 0;
}