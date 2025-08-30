#include <iostream>
using namespace std;
const int mod = 1000000007;
int cnt[500005], fac[500005], ifac[500005];
int qmi(int a, int b)
{
    int res = 1;
    while(b)
    {
        if(b & 1)
        {
            res = 1ll * res * a % mod;
        }
        a = 1ll * a * a % mod;
        b >>= 1;
    }
    return res;
}
int Inv(int a)
{
    return qmi(a, mod - 2);
}
int main()
{
    fac[0] = 1;
    int inf = 5e5;
    for(int i = 1; i <= inf; i++)
    {
        fac[i] = 1ll * i * fac[i - 1] % mod;
    }
    ifac[inf] = Inv(fac[inf]);
    for(int i = inf; i >= 1; i--)
    {
        ifac[i - 1] = 1ll * i * ifac[i] % mod;
    }
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }
    n -= 2;
    int cur = fac[n];
    for(int i = 1; i <= 5e5; i++)
    {
        if(cnt[i])
        {
            cur = 1ll * cur * ifac[cnt[i]] % mod;
        }
    }
    int ans = 0;
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0 && cnt[i] && cnt[n / i])
        {
            if(i * i != n)
            {
                ans = (ans + 2ll * cur % mod * fac[cnt[i]] % mod * fac[cnt[n / i]] % mod * ifac[cnt[i] - 1] % mod * ifac[cnt[n / i] - 1] % mod) % mod;
            }
            else if(cnt[i] >= 2)
            {
                ans = (ans + 1ll * cur % mod * fac[cnt[i]] % mod * ifac[cnt[i] - 2] % mod) % mod;
            }
        }
    }
    cout << ans;
    return 0;
}