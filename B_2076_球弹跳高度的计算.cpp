#include <iostream>
using namespace std;
double h, ans;
int main()
{
    cin >> h;
    ans += h;
    h /= 2;
    for(int i = 2; i <= 10; i++)
    {
        ans += 2 * h;
        h /= 2;
    }
    printf("%.4lf\n%.7lf", ans, h);
    return 0;
}