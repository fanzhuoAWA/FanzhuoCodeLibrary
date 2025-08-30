#include <iostream>
using namespace std;
int a[100005];
int main()
{
    int n, m, d = 1, cnt = 0;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++)
    {
        if(cnt + a[i] > m)
        {
            d++;
            cnt = a[i];
        }
        else
        {
            cnt += a[i];
        }
    }
    cout << d;
    return 0;
}