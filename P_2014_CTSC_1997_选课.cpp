#include <iostream>
#include <vector>
using namespace std;
int n, m;
vector <int> wth[305];
int dp[305][305];
int s[305];
void dfs(int p, int u)
{
    dp[u][0] = 0;
    for(auto v : wth[u])
    {
        if(v == p)
        {
            continue;
        }
        dfs(u, v);
        for(int j = m; j >= 0; j--)
        {
            for(int k = 0; k <= j; k++)
            {
                dp[u][j] = max(dp[u][j], dp[u][j - k] + dp[v][k]);
            }
        }
        
    }
    if(u != 0)
    {
        for(int j = m; j >= 1; j--)
        {
            dp[u][j] = dp[u][j - 1] + s[u];
        }
    }
}
int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        int f;
        cin >> f >> s[i];
        wth[f].push_back(i);
        wth[i].push_back(f);
    }
    dfs(0, 0);
    cout << dp[0][m];
    return 0;
}