#include <iostream>
#define ll long long
using namespace std;
ll fob[105] = {0, 2, 3}, fz;
int ans;
void dfs(int f, ll cur)
{
    if(cur == 1)
    {
        ans++;
        return;
    }
    if(f > fz || cur < fob[f])
    {
        return;
    }
    dfs(f + 1, cur);
    while(cur % fob[f] == 0)
    {
        cur /= fob[f];
        dfs(f + 1, cur);
    }
}
int main()
{
    for(int i = 3; i <= 100; i++)
    {
        fob[i] = fob[i - 1] + fob[i - 2];
        if(fob[i] < 0)//溢出
        {
            fob[i] = 0;
            fz = i - 1;
            break;
        }
    }
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        ans = 0;
        cin >> n;
        dfs(1, n);
        cout << ans << "\n";
    }
    return 0;
}