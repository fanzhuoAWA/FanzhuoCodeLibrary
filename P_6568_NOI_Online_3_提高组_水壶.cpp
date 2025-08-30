#include <iostream>
#include <algorithm>
using namespace std;
int watcu[1000005], f[1000005];
int main()
{
    int n, k, maxn = -1;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> watcu[i];
        f[i] = f[i - 1] + watcu[i];
    }
    for(int i = 1; i <= n; i++)
    {
        if(i + k > n)
        {
            break;
        }
        maxn = max(maxn, f[i + k] - f[i - 1]);
    }
    cout << maxn;
    return 0;
}