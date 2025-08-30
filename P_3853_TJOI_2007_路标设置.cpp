#include <iostream>
#include <algorithm>
using namespace std;
int a[10000005];
int l, n ,k;
bool check(int x)
{
    int xx = k, sum = 0;
    for(int i = 1; i < n; i++)
    {
        if(xx < 0)
        {
            break;
        }
        if(a[i] - sum <= x)
        {
            sum = a[i];
        }
        else
        {
            sum += x;
            i--;
            xx--;
        }
    }
    return xx >= 0;
}
int main()
{
    int kong;
    scanf("%d%d%d", &l, &n, &k);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int h = 0, r = l;
    while(h <= r)
    {
        int mid = h + (r - h) / 2;
        if(check(mid))
        {
            kong = mid;
            r = mid - 1;
        }
        else
        {
            h = mid + 1;
        }
    }
    cout << kong;
    return 0;
}