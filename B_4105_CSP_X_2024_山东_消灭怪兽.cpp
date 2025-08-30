#include <iostream>
#define ll long long
using namespace std;
const int M = 1e6 + 5;
ll a[M], e[M], tong[M];
int main()
{
    ll n, k, cnt = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        e[i] += (e[i - 1] + a[i]) % k;
    }
    tong[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        tong[e[i]]++;
    }
    for(int i = 0; i < k; i++)
    {
        if(tong[i] >= 2)
        {
            cnt += tong[i] * (tong[i] - 1) / 2;
        }
        
    }
    cout << cnt;
    return 0;
}