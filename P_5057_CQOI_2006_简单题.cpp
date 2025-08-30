#include <iostream>
using namespace std;
const int AWA = 1e6 + 5;
long long a[AWA], c[AWA];
int main()
{
    int n, m, len = 400;
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= m; i++)
    {
        int op, x, y;
        cin >> op >> x;
        if(op == 1)
        {
            cin >> y;
            if((x + len - 1) / len == (y + len - 1) / len)
            {
                for(int i = x; i <= y; i++)
                {
                    a[i] ^= 1;
                }
                continue;
            }
            while(x % len != 1)
            {
                a[x] ^= 1;
                x++;
            }
            while(y % len != 0)
            {
                a[y] ^= 1;
                y--;
            }
            for(int f = (x + len - 1) / len; f <= (y + len - 1) / len; f++)
            {
                c[f]++;
            }
        }
        if(op == 2)
        {
            if(c[(x + len - 1) / len] % 2 != 0)
            {
                cout << (a[x] ^ 1) << "\n";
            }
            else
            {
                cout << a[x] << "\n";
            }
        }
    }
    return 0;
}