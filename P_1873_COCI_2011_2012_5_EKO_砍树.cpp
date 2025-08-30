#include <iostream>
using namespace std;
long long tree[1000005];
int n, m;
bool cheak(long long mid)
{
    long long tot = 0;
    for(long long i = 1; i <= n; i++)
    {
        if(tree[i] > mid)
        {
            tot += tree[i] - mid;
        }
    }
    return tot >= m;
}
int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> tree[i];
    }
    int l = 0, r = 4 * 1e5, mid;
    while(l + 1 < r)
    {
        mid = (l + r) / 2;
        if(cheak(mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << l;
    return 0;
}