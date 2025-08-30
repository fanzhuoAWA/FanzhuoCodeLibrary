#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, L, R, maxn = -1;
    cin >> n >> L >> R;
    if(L / n == R / n)
    {
        cout << R % n;
        return 0;
    }
    cout << n - 1;
    return 0;
}