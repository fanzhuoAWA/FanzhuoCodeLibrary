#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
    int n;
    double x, ans = 1;
    cin >> x >> n;
    for(int i = 1; i <= n; i++)
    {
        ans += pow(x, i);
    }
    printf("%.2f", ans);
    return 0;
}