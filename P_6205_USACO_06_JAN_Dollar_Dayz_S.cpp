#include <iostream>
using namespace std;
__int128 f[1005];
void write(__int128 x)
{
    if(x < 0)
        putchar('-'), x =- x;
    if(x > 9)
        write(x / 10);
    putchar(x % 10 + '0');
    return;
}
int main()
{
    int n, k;
    cin >> n >> k;
    f[0] = 1;
    for(int i = 1; i <= k; i++)
    {
        for(int j = i; j <= n; j++)
        {
            f[j] += f[j - i];
        }
    }
    write(f[n]);
    return 0;
}