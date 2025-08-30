#include <iostream>
using namespace std;
const int mod = 998244353;
int n;
int main()
{
    cin >> n;
    long long ans = 1ll * n * (n - 1) / 2 % mod;
    for(int i = 3; i <= n; i++)
    {
        ans = ans * i % mod;
    }
    cout << ans;
    return 0;
}