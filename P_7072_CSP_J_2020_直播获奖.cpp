#include <iostream>
#include <cmath>
using namespace std;
int a[100005];
int d[1005];
int main()
{
    int n, w, p = 0, f, ans;
    cin >> n >> w;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    } 
    for(int i = 1; i <= n; ++i)
    {
        d[a[i]]++;
        f = max(1, (i * w / 100));
        ans = 600;
        while(f > 0)
        {
            if(d[ans])
            {
                f -= d[ans];
            }
            ans--;
        }
        cout << ans + 1 << " ";
    }
    return 0;
}