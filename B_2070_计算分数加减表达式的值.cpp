#include <iostream>
using namespace std;
int main()
{
    int n;
    double ans = 0;
    cin >> n;
    for (int i = 1;i <= n; i++)
    {
        if (i % 2 != 0) 
        {
            ans+=1.0/i;
        }
        else
        {
            ans-=1.0/i;
        }
    }
    printf("%.4lf", ans);
}