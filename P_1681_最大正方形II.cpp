#include <iostream>
#include <algorithm>
using namespace std;
int G[1505][1505], f[1505][1505][2];
int main()
{
    int n, m, maxn = -1e9;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin >> G[i][j];
        }
    }
    for(int x = 1; x <= n; x++)
    {
        for(int y = 1; y <= m; y++)
        {
            if(G[x][y])
            {
                f[x][y][1] = min({f[x - 1][y][0], f[x][y - 1][0], f[x - 1][y - 1][1]}) + 1;
                maxn = max(f[x][y][1], maxn);
            }
            else
            {
                f[x][y][0] = min({f[x - 1][y][1], f[x][y - 1][1], f[x - 1][y - 1][0]}) + 1;
                maxn = max(f[x][y][0], maxn);
            }
        }
    }
    cout << maxn;
    return 0;
}