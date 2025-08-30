#include <iostream>
#include <cmath>
#define PI 3.1415926
using namespace std;
int n;
double fux[10], fuy[10], suk[10];
bool vis[10];
double ans, x, xx, y, yy, mmj;
double suan(int ppz)
{
    double s1 = min(abs(fux[ppz] - x), abs(fux[ppz] - xx));
    double s2 = min(abs(fuy[ppz] - y), abs(fuy[ppz] - yy));
    double aans = min(s1, s2);
    for(int i = 1; i <= n; i++)
    {
        if(ppz != i && vis[i])
        {
            double d = sqrt((fux[ppz] - fux[i]) * (fux[ppz] - fux[i]) + (fuy[ppz] - fuy[i]) * (fuy[ppz] - fuy[i]));
            aans = min(aans, max(d - suk[i], 0.0));
        }
    }
    return aans;
}
void dfs(int poz, double mj)
{
    if(poz > n)
    {
        ans = max(ans, mj);
        return;
    }
    for(int i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            suk[i] = suan(i);
            vis[i] = 1;
            dfs(poz + 1, mj + suk[i] * suk[i] * PI);
            vis[i] = 0;
        }
    }
}
int main()
{
    cin >> n >> x >> y >> xx >> yy;
    for(int i = 1; i <= n; i++)
    {
        cin >> fux[i] >> fuy[i];
    }
    mmj = abs(x - xx) * abs(y - yy);
    dfs(1, 0);
    cout << int(mmj - ans + 0.5);
    return 0;
}