#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int a[100005], b[100005], n;
int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n; ++i)
    {
        cin >> b[i];
    }
    priority_queue <pair <int, pair<int, int>>, vector <pair <int, pair<int, int>>>, greater <pair <int, pair<int, int>>>> q;
    for(int i = 1; i <= n; ++i)
    {
        q.push({a[i] + b[1], {i, 1}});
    }
    for(int i = 1; i <= n; ++i)
    {
        auto it = q.top();
        q.pop();
        cout << it.first << " ";
        int f = it.second.first, s = it.second.second;
        if(s < n)
        {
            q.push({a[f] + b[s + 1], make_pair(f, s + 1)});
        }
    }
    return 0;
}