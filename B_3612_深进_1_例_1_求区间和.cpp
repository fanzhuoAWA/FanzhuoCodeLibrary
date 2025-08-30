#include <iostream>
using namespace std;
int a[100005], fix[100005];
int main()
{
    int n, m;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        fix[i] = fix[i - 1] + a[i];
    }
    cin >> m;
    for(int i = 1; i <= m; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << fix[r] - fix[l - 1] << "\n";
    }
    return 0;
}