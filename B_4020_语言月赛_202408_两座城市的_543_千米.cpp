#include <iostream>
using namespace std;
int main()
{
    int n, m, a, b, cnt = 0;
    cin >> n >> m >> a >> b;
    for (int i = 1; i <= m; i++)
    {
        int l, az = 0, bz = 0;
        cin >> l;
        for (int j = 1; j <= l; j++)
        {
            int x;
            cin >> x;
            if(x == a)
            {
                az = j;
            }
            if(x == b)
            {
                bz = j;
            }
        }
        if(az < bz && az && bz)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}