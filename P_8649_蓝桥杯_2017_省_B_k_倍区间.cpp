#include <iostream>
#include <algorithm>
using namespace std;
long long a[100005], fix[100005], M[100005];
int main()
{
    long long cnt = 0;
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        fix[i] = fix[i - 1] + a[i];
    }
    M[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        cnt += M[fix[i] % k];
        M[fix[i] % k] += 1;
    }
    cout << cnt;
    return 0;
}