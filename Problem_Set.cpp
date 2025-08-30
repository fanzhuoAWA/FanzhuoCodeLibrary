#include <iostream>
#include <map>
using namespace std;
int a[200005], b[200005];
bool vis[200005];
map <int, int> ma;
int main()
{
    int n, m;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        ma[a[i]]++;
    }
    cin >> m;
    for(int i = 1; i <= m; i++)
    {
        cin >> b[i];
        if(ma[b[i]] == 0)
        {
            cout << "NO";
            return 0;
        }
        ma[b[i]]--;
    }
    cout << "YES";
    return 0;
}