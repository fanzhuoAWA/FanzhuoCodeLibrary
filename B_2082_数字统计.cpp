#include <iostream>
using namespace std;
int two(int x)
{
    int cnt = 0;
    while(x != 0)
    {
        if(x % 10 == 2)
        {
            cnt++;
        }
        x /= 10;
    }
    return cnt;
}
int main()
{
    int l, r, ans = 0;
    cin >> l >> r;
    for(int i = l; i <= r; i++)
    {
        ans += two(i);
    }
    cout << ans;
    return 0;
}