#include <iostream>
#include <stack>
#include <cmath>
#define ll long long
using namespace std;
stack <int> fyc;
int main()
{
    ll n, k, ans = 0;
    cin >> k >> n;
    while(n)
    {
        fyc.push(n % 2);
        n /= 2;
    }
    while(!fyc.empty())
    {
        ans += fyc.top() * pow(k, fyc.size() - 1);
        fyc.pop();
    }
    cout << ans;
    return 0;
}