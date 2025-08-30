#include <iostream>
using namespace std;
int main()
{
    long long a, b, ans = 1;
    cin >> a >> b;
    for(int i = 1; i <= b; i++)
    {
        ans *= a;
        ans %= 1000;
    }
    printf("%03lld", ans);
    return 0;
}