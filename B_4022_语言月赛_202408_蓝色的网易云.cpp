#include <iostream>
using namespace std;
int a[1005][1005], w[1005];
int main()
{
    int n, m, k;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        int c;
        cin >> c;
        w[c]++;
        a[c][w[c]] = i;
    }
    k = n / m;
    for(int i = 1; i <= k; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cout << a[j][i] << "\n";
        }
    }
    return 0;
}