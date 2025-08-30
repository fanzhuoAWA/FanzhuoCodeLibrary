#include <iostream>
#include <queue>
#include <vector>
using namespace std;
queue <int> que;
priority_queue <int, vector<int>, greater<int>> p;
int main()
{
    int q, op, x;
    cin >> q;
    for(int i = 1; i <= q; ++i)
    {
        cin >> op;
        if(op == 1)
        {
            cin >> x;
            que.push(x);
        }
        else if(op == 2)
        {
            if(p.empty())
            {
                cout << que.front() << "\n";
                que.pop();
            }
            else
            {
                cout << p.top() << "\n";
                p.pop();
            }
        }
        else
        {
            int len = que.size();
            for(int j = 1; j <= len; j++)
            {
                p.push(que.front());
                que.pop();
            }
        }
    }
    return 0;
}