#include <iostream>
#include <string>
using namespace std;
const int AWA = 1e6 + 5;
long long a[AWA], b[AWA];
int main()
{
    int n, m, len = 400;
    scanf("%d%d", &n, &m);
    for(int i = 1; i <= m; i++)
    {
        string op;
        int x, k;
        cin >> op >> x >> k;
        if(op == "x")
        {
            a[x] += k;
            b[(x + len - 1) / len] += k;
        }
        if(op == "y")
        {
            long long cnt = 0, j = k;
            if((x + len - 1) / len == (k + len - 1) / len)
            {
                for(int i = x; i <= k; i++)
                {
                    cnt += a[i];
                }
                cout << cnt << "\n";
                continue;
            }
            while(x % len != 1)
            {
                cnt += a[x];
                x++;
            }
            while(j % len != 0)
            {
                cnt += a[j];
                j--;
            }
            for(int c = (x + len - 1) / len; c <= (j + len - 1) / len; c++)
            {
                cnt += b[c];
            }
            cout << cnt << "\n";
        }
    }
    return 0;
}