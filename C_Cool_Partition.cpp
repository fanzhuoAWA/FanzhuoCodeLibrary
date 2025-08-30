#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int a[200005];
set <int> num;
set <int> tem;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, ans = 1;
        scanf("%d", &n);
        for(int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
        }
        num.clear();
        tem.clear();
        num.insert(a[1]);
        tem.insert(a[1]);
        for(int i = 2; i <= n; i++)
        {
            num.erase(a[i]);
            tem.insert(a[i]);
            if(num.size() == 0)
            {
                ans++;
                num = tem;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}