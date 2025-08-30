#include <iostream>
using namespace std;
bool is_seven(int x)
{
    while(x != 0)
    {
        if(x % 10 == 7)
        {
            return false;
        }
        x /= 10;
    }
    return true;
}
int main()
{
    int n, ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        if(i % 7 != 0 && is_seven(i))
        {
            ans = ans + i * i;
        }
    }
    cout << ans;
    return 0;
}