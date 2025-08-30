#include <iostream>
using namespace std;
int a[200005];
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 1; i <= n; i++)
    {
        long long cnt = 0;
        for(int j = 1; j <= n; j++)
        {
            if(a[j] > a[i])
            {
                cnt += a[j];
            }
        }
        printf("%lld ", cnt);
    }
    return 0;
}