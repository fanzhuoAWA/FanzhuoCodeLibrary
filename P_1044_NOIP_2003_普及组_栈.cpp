#include <iostream>
#include <cmath>
using namespace std;
long long suan(int n, int m)
{
    long long r = 1;
    for (int i = 0; i < m; ++i)
    {
        r *= (n - i);
        r /= (i + 1);
    }
    return r;
}
int main()
{
    int n;
    cin >> n;
    cout << suan(2 * n, n) / (n + 1) << endl;
    return 0;
}
