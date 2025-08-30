#include <iostream>
#define ll long long
using namespace std;
int fanzhuo(int number, int f)
{
    int sum = 1;
    for(int i = 1; i <= f; i++)
    {
        sum *= number;
    }
    return sum;
}
int main()
{
    ll n;
    cin >> n;
    if(n % 2 != 0)
    {
        cout << "-1";
        return 0;
    }
    else
    {
        while(n > 0)
        {
            ll i = 1;
            while(fanzhuo(2, i) <= n)
            {
                i++;
            }
            cout << fanzhuo(2, i - 1) << " ";
            n -= fanzhuo(2, i - 1);
        }
    }
    return 0;
}