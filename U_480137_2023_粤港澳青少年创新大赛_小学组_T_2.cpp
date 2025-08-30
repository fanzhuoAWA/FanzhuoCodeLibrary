#include <iostream>
#define ll long long
using namespace std;
ll song[100005];
int main()
{
    ll n, t;
    cin >> n >> t;
    for(int i = 1; i <= n; i++)
    {
        scanf("%lld", &song[i]);
    }
    ll cur = 0, now = 0;
    while(1)
    {
        cur++;
        if(cur > n)
        {
            cur = 1;
        }
        now += song[cur];
        if(now > t)
        {
            cout << cur << "\n" << (now - t);
            break;
        }
        if(now == t)
        {
            cout << cur + 1 << "\n" << (now + song[cur + 1] - t);
            break;
        }
    }
    return 0;
}