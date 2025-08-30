#include <iostream>
using namespace std;
const int AWA = 1e6 + 5;
long long a[AWA], b[AWA], c[AWA];
int main()
{
    int n, m, len = 400;
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++)
    {
        scanf("%lld", &a[i]);
        b[(i + len - 1) / len] += a[i];
    }
    for(int hello = 1; hello <= m; hello++)
    {
        long long op, x, y, k;
        cin >> op >> x >> y;
        if(op == 1)
        {
            cin >> k;
            if((x + len - 1) / len == (y + len - 1) / len)
            {
                for(int i = x; i <= y; i++)
                {
                    a[i] += k;
                    b[(i + len - 1) / len] += k;
                }
                continue;
            }
            while(x % len != 1)
            {
                a[x] += k;
                b[(x + len - 1) / len] += k;
                x++;
            }
            while(y % len != 0)
            {
                a[y] += k;
                b[(y + len - 1) / len] += k;
                y--;
            }
            for(int f = (x + len - 1) / len; f <= (y + len - 1) / len; f++)
            {
                c[f] += k;
                b[f] += k * len;
            }
        }
        if(op == 2)
        {
            long long cnt = 0;
            if((x + len - 1) / len == (y + len - 1) / len)
            {
                for(int i = x; i <= y; i++)
                {
                    cnt += a[i] + c[(i + len - 1) / len];
                }
                cout << cnt << "\n";
                continue;
            }
            while(x % len != 1)
            {
                cnt += a[x] + c[(x + len - 1) / len];
                x++;
            }
            while(y % len != 0)
            {
                cnt += a[y] + c[(y + len - 1) / len];
                y--;
            }
            for(int fan = (x + len - 1) / len; fan <= (y + len - 1) / len; fan++)
            {
                cnt += b[fan];
            }
            cout << cnt << "\n";
        }
    }
    return 0;
}