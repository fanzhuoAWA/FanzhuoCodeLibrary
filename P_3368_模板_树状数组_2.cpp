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
    for(int i = 1; i <= m; i++)
    {
        int op, x, y, k;
        cin >> op >> x;
        if(op == 1)
        {
            cin >> y >> k;
            if((x + len - 1) / len == (y + len - 1) / len)
            {
                for(int i = x; i <= y; i++)
                {
                    a[i] += k;
                }
                continue;
            }
            while(x % len != 1)
            {
                a[x] += k;
                x++;
            }
            while(y % len != 0)
            {
                a[y] += k;
                y--;
            }
            for(int f = (x + len - 1) / len; f <= (y + len - 1) / len; f++)
            {
                c[f] += k;
            }
        }
        if(op == 2)
        {
            cout << a[x] + c[(x + len - 1) / len] << "\n";
        }
    }
    return 0;
}