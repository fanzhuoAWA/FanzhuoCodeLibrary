#include <iostream>
using namespace std;
const int N = 3e6 + 1;
int fac[N], ifac[N], inv[N], n, p;
int fast_power(int a, int b)
{
    int res = 1;
    while(b)
    {
        if(b & 1)
        {
            res = 1ll * res * a % p;
        }
        a = 1ll * a * a % p;
        b >>= 1;
    }
    return res;
}
int main()
{
    scanf("%d%d", &n, &p);

    fac[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        fac[i] = 1ll * fac[i - 1] * i % p;
    }
    ifac[n] = fast_power(fac[n], p - 2);
    for(int i = n - 1; i >= 0; i--)
    {
        ifac[i] = 1ll * ifac[i + 1] * (i + 1) % p;
        inv[i + 1] = 1ll * ifac[i + 1] * fac[i] % p;
    }
    for(int i = 1; i <= n; i++)
    {
        printf("%d\n", inv[i]);
    }
    return 0;
}