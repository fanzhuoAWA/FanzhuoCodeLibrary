#include <iostream>
#include <stack>
#include <cstring>
using namespace std;
stack<char> s;
int main()
{
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '(')
        {
            s.push(a[i]);
        }
        else if(a[i] == ')')
        {
            if (!s.empty())
            {
                s.pop();
            }
            else
            {
                cout << "NO";
                return 0;
            }
        }
    }
    if (!s.empty())
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}