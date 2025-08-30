#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int m, n, a[25][25], k, cut = 1, anz, s;
struct claz
{
    int x, y, t, w;
}oz[1000];
int main()
{
    cin >> m >> n >> k;
    for(int i = 1; i <= m; ++i)
    {
        for(int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
            if(a[i][j] > 0)
            {
                oz[cut].x = i;
                oz[cut].y = j;
                oz[cut].w = a[i][j];
                cut++;
            }
        }
    }
    for(int i = 1; i < cut; i++)
    {
        for(int j = i + 1; j <= cut; j++)
        {
            if(oz[i].w < oz[j].w)
            {
                swap(oz[i], oz[j]);
            }
        }
    }
    for(int i = 1; i <= k; i++)
    {
        s = oz[i].x;
        if(i == 1) 
        {
            oz[i].t = oz[i].x + 1;
        }
        else 
        {
            oz[i].t = oz[i - 1].t + abs(oz[i].x - oz[i - 1].x) + abs(oz[i].y - oz[i - 1].y) + 1;
        }
        if (oz[i].t + s <= k)
        {
            anz += oz[i].w;
        }
    }
    cout << anz;
    /*k--;
    dx = 1;
    dy = maxj;
    while(true)
    {
        k--;
        if(!run)//润的状态
        {
            if(dx != 0)
            {
                dx--;
            }
            else
            {
                break;
            }
        }
        else if(k == dx && run)
        {
            run = false;//开润！！
        }
        else if(dx != maxi && run)
        {
            if(dx < maxi)
            {
                dx++;
            }
            else
            {
                dx--;
            }
        }
        else if(dy != maxj && run)
        {
            if(dy < maxj)
            {
                dy++;
            }
            else
            {
                dy--;
            }
        }
        else if(dx == maxi && dy == maxj && run)
        {
            vis[dx][dy] = true;
            c++;
        }
        for(int i = 1; i <= m && run; ++i)
        {
            for(int j = 1; j <= n && run; ++j)
            {
                cin >> a[i][j];
                if(a[i][j] > maxn && !(vis[i][j]))
                {
                    maxn = a[i][j];
                    maxj = j;
                    maxi = i;
                }
            }
        }
    }
    cout << c;*/
    return 0;
}