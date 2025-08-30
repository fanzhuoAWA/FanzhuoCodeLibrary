#include <iostream>
#include <cstring>
using namespace std;
int D[1005], C[1005], f[1005][1005];
int main()
{
    int n, m;
    cin >> n >> m;
    memset(f, 0x3f, sizeof(f));
    memset(f[0], 0, sizeof(f[0]));
    for(int i = 1; i <= n; i++)
    {
        cin >> D[i];
    }
    for(int i = 1; i <= m; i++)
    {
        cin >> C[i];
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            f[i][j] = min(f[i][j - 1], f[i - 1][j - 1] + C[j] * D[i]);
        }
    }
    cout << f[n][m];
    return 0;
}