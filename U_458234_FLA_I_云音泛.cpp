#include <iostream>
#include <cmath>
using namespace std;
int a[200005];
int b[200005];
int main()
{
    int n, m, cnt = 0, mac = -1e9;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        for(int k = t; k <= t + m - 1; k++)
        {
            a[k]++;
        }
    }
    for(int i = 1; i <= n; i++)
    {
        int x = a[i];
        a[i] = 0;
        for(int j = 1; j <= n; j++)
        {
            if(a[j] != 0)
            {
                for(int k = a[j]; k <= a[j] + m - 1; k++)
                {
                    b[k]++;
                }
            }
        }
        for(int j = 1; j <= n; j++)
        {
            if(b[j] == 1)
            {
                cnt++;
            }
        }
        mac = max(mac, cnt);
        a[i] = x;
    }
    cout << mac;
    return 0;
}