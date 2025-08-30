#include <iostream>
using namespace std;
struct src
{
    int c, m, e, p, sum;//语数英体
    bool flag = false;//是否三好
}a[25];
int main()
{
    int n, cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i].c >> a[i].m >> a[i].e >> a[i].p;
        a[i].sum  = a[i].c + a[i].m + a[i].e + a[i].p;
        if(a[i].c >= 90 && a[i].m >= 90 && a[i].e >= 90 && a[i].sum >= 408 && a[i].t >= 40)
        {
            cnt++;
            a[i].flag = true;
        }
    }
    return 0;
}