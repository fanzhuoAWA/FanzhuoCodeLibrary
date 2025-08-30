#include <iostream>
using namespace std;
int n, k;
double fire(int i)
{
    if(i == 0)
    {
        return 0;
    }
    //double a = k * 1.0 + fire(i - 1) / i * 1.0;
    //cout << a << "\n";
    //return a;
    return k * 1.0 + fire(i - 1) / i * 1.0;
}
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        double ans;
        scanf("%d%d", &n, &k);
        if(n == 1)
        {
            ans = k;
        }
        else if(n == 2)
        {
            ans = fire(2);
        }
        else
        {
            ans = fire(3);
        }
        printf("%.1lf\n", ans);
    }
    return 0;
}