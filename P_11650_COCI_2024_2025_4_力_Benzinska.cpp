#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
struct eat
{
    int xx, yy;
}a[200005];
bool cmp(eat fri, eat sec)
{
    return fri.xx < sec.xx;
}
int main()
{
    int n, D, X, cnt = 0;
    cin >> n >> D >> X;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i].xx;
    }
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i].yy;
    }
    sort(a + 1, a + n + 1, cmp);
    int cur = 1, now = 0;
    priority_queue<int> pq;
    while(now < X)
    {
        now += D;
        D = 0;
        while(cur <= n && a[cur].xx <= now)
        {
            pq.push(a[cur].yy);
            cur++;
        }
        if(now < X)
        {
            if(pq.empty())
            {
                cout << "-1";
                return 0;
            }
            else
            {
                int x = pq.top();
                pq.pop();
                D = x;
                cnt++;
            }
        }
    }
    // for(int i = 1; i <= X; i++)
    // {
    //     D--;
    //     if(a[cur].xx == i)
    //     {
    //         int nxt = a[cur + 1].xx - i;
    //         if(D >= nxt)
    //         {
    //             continue;
    //         }
    //         else
    //         {
    //             D += a[cur].yy;
    //             cur++;
    //             cnt++;
    //         }
    //     }
    //     if(D < 0)
    //     {
    //         cout << "-1";
    //         return 0;
    //     }
    // }
    cout << cnt;
    return 0;
}