#include <iostream>
#include <queue>
using namespace std;
queue <int> q;
int main()
{
    int n, op, x;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> op;
        if(op == 1)
        {
            cin >> x;
            q.push(x);
        }
        else if(op == 2)
        {
            if(!q.empty())
            {
                q.pop();
            }
            else
            {
                cout << "ERR_CANNOT_POP\n";
            }
        }
        else if(op == 3)
        {
            if(!q.empty())
            {
                cout << q.front() << "\n";
            }
            else
            {
                cout << "ERR_CANNOT_QUERY\n";
            }
        }
        else
        {
            cout << q.size() << "\n";
        }
    }
    return 0;
}