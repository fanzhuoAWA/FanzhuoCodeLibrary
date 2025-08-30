#include <iostream>
#include <queue>
using namespace std;
const int MAXN = 200000;
queue <int> q[MAXN];
int main()
{
    int n, cur = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if(!q[cur].empty())
        {
            if(q[cur].back() == x)
            {
                q[cur].push(x);
            }
            else
            {
                q[++cur].push(x);
            }
        }
        else
        {
            q[cur].push(x);
        }
    }
    while(n != 0)
    {
        for(int i = 1; i <= n; i++)
        {
            
        }
        cout << "\n";
    }
    return 0;
}