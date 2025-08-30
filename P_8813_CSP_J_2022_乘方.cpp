#include <iostream>
using namespace std;
int main()
{
    //freopen("pow.in", "r", stdin);
    //freopen("pow.out", "w", stdout);
    long long a, b, sum = 1;
    cin >> a >> b;
    for(int i = 1; i <= b; i++)
    {
        sum *= a;
        if(sum > 1000000000)
        {
            cout << "-1";
            return 0;
        }
    }
    cout << sum;
    return 0;
}