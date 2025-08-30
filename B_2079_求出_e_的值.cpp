#include <iostream>
using namespace std;
int main()
{
    int n;
    double e = 1.0, ans = 1.0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        e *= i;
        ans += 1 / e;
    }
    printf("%.10f", ans);
    return 0;
}