#include <iostream>
#include <map>
using namespace std;
map <pair<int, int>, int> a;
int main()
{
    long long n, m, k, cnt = 0;
    cin >> n >> m >> k;
    for(int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        a[{x, y}]--;
    }
    for(int i = 1; i <= k; i++)
    {
        int x, y;
        cin >> x >> y;
        a[{x, y}]++;
    }
    for(auto i : a)
    {
        if(i.second < 0)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}