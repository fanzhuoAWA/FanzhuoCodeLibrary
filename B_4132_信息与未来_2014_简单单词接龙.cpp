#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, maxn = -1;
vector <pair<string, bool>> loon;
void dfs(int now, int len)
{
    maxn = max(maxn, len);
    for(int i = 0; i < n; i++)
    {
        if((now == 0 && len == 0) || (loon[now].first[1] == loon[i].first[0] && loon[i].second))
        {
            loon[i].second = false;
            dfs(i, len + 1);
            loon[i].second = true;
        }
    }
}
int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        string world;
        cin >> world;
        loon.push_back({world, true});
    }
    dfs(0, 0);
    cout << maxn;
    return 0;
}