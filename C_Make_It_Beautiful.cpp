#include <iostream>
#define ll long long
using namespace std;
ll n, k, a[5005];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll ans = 0;
        scanf("%lld%lld", &n, &k);
        for(int i = 1; i <= n; i++)
        {
            scanf("%lld", &a[i]);
        }//二进制下：找倒数第一位为0的，+1(2^0)，找倒数第二位为0，+2(2^1)，找倒数第三位为0，+4(2^2)，找倒数第4=0，+8(2^3)
        //找倒数第i位为0的,+2^(i - 1) k -= 2^(i - 1)
        ll cost = 1;
        while(true)
        {
            if(k < cost)
            {
                break;
            }
            bool end = false;
            for(int j = 1; j <= n; j++)//遍历a
            {
                if(a[j] & 1 == 0)
                {
                    if(k - cost < 0)
                    {
                        end = true;
                        break;
                    }
                    k -= cost;  
                }
                ans++;
                a[j] >>= 1;
            }
            cost <<= 1;
            if(end)
            {
                break;
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}