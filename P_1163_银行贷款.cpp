#include <iostream>
using namespace std;
double w0, w, m;
double check(double mid)
{
    double w00 = w0, ww = w;
    for(int i = 1; i <= m; i++)
    {
        double lx = w00 * mid / 100;
        w00 = w00 - w + lx;
        if(w00 < 0)
        {
            return -1;
        }
    }
    return w00;
}
int main()
{
    cin >> w0 >> w >> m;
    double l = 0.01, r = 600.0;
    int t = 100;
    while(t--)
    {
        double mid = (l + r) / 2;
        double fan = check(mid);
        if(fan > 0)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    printf("%.1f", l);
    return 0;
}