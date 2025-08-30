#include <iostream>
using namespace std;
const int MAXN = 2.5 * 1e4;
struct time
{
    int s, e;
};
time cow[MAXN];
int main()
{
    int n, t;
    cin >> n >> t;
    for(int i = 1; i <= n; i++)
    {
        cin >> cow[i].s >> cow[i].e;
    }
    for(int k = 1; k <= t; k++)
    {
        
    }
    return 0;
}