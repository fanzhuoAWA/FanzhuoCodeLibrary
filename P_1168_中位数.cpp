#include <iostream>
#include <queue>
#include <vector>
using namespace std;
priority_queue <int> qb;//big gen dui
priority_queue <int, vector<int>, greater<int>> qs;//small gen dui
int main()
{
    int n, x;
    cin >> n >> x;
    qb.push(x);
    cout << x << "\n";
    for(int i = 2; i <= n; i++)
    {
        cin >> x;
        if(x > qb.top())
        {
            qs.push(x);
        }
        else
        {
            qb.push(x);
        }
        if(i % 2 != 0)
        {
            while(qb.size() > i / 2 + 1)
            {
                qs.push(qb.top());
                qb.pop();
            }
            while(qb.size() < i / 2 + 1)
            {
                qb.push(qs.top());
                qs.pop();
            }
            cout << qb.top() << "\n";
        }
    }
    
    return 0;
}