#include <iostream>
using namespace std;
int main()
{
    double sum = 0;
    double k, n = 0;
    cin >> k;
    while(sum <= k)
    {
        n++;
        sum = sum + (1.0 / n);
    }
    cout << n;
    return 0;
}