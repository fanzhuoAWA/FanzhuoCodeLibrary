#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        stack <unsigned long long> s;
        int n;
        cin >> n;
        for(int j = 1; j <= n; j++)
        {
            string a;
            cin >> a;
            if(a == "push")
            {
                unsigned long long x;
                cin >> x;
                s.push(x);
            }
            else if(a == "pop")
            {
                if(!s.empty())
                {
                    s.pop();
                }
                else
                {
                    cout << "Empty\n";
                }
            }
            else if(a == "query")
            {
                if(!s.empty())
                {
                    cout << s.top() << "\n";
                }
                else
                {
                    cout << "Anguei!\n";
                }
            }
            else
            {
                cout << s.size() << "\n";
            }
        }
    }
    return 0;
}