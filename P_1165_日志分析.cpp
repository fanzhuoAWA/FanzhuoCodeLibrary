#include <iostream>
#include <stack>
using namespace std;
stack <int> c;
stack <int> maxn;
int main()
{
    int n, op, x;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &op);
        if(op == 0)
        {
            scanf("%d", &x);
            c.push(x);
            if(maxn.empty() || x > maxn.top())
            {
                maxn.push(x);
            }
            else
            {
                maxn.push(maxn.top());
            }
        }
        else if(op == 1)
        {
            if(!c.empty())
            {
                c.pop();
                maxn.pop();
            }
        }
        else
        {
            if(!c.empty())
            {
                cout << maxn.top() << "\n";
            }
            else
            {
                cout << "0\n";
            }
        }
    }
    return 0;
}