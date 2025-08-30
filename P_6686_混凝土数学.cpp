#include <iostream>
using namespace std;
int a[200005];
int main()
{
    int n, cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i < n - 1; i++)
    {
        int f = a[i];
        for(int j = i + 1; j < n; j++)
        {
            int s = a[j];
            for(int k = j + 1; k <= n; k++)
            {
                int t = a[k];
                if((f + s > t) && (f + t > s) && (s + t > f) && ((f == s) || (f == t) || (t == s)))
                {
                    cnt++;
                    cnt %= 998244353;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}