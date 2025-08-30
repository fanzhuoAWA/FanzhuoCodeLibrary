#include <iostream>
using namespace std;
int a[10005];
int main()
{
    int n, t, mod = 10, cnt = 0;
    cin >> n >> t;
    if(t == 2)
    {
        mod = 100;
    }
    if(t == 3)
    {
        mod = 1000;
    }
    if(t == 4)
    {
        mod = 10000;
    }
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        x %= mod;
        a[x]++;
    }
    for(int i = 0; i <= mod; i++)
    {
        if(a[i])
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}