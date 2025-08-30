#include <iostream>
#include <set>
using namespace std;
int q, x ,y;
set <int> s;
int main()
{
    scanf("%d", &q);
    for(int i = 1; i <= q; ++i)
    {
        scanf("%d%d", &x, &y);
        if(x == 1)
        {
            if(s.find(y) != s.end())
            {
                cout << "FALL\n";
            }
            else
            {
                s.insert(y);
                cout << "OK\n";
            }
        }
        if(x == 2)
        {
            if(s.find(y) != s.end())
            {
                s.erase(y);
                cout << "OK\n";
            }
            else
            {
                cout << "FALL\n";
            }
        }
        if(x == 3)
        {
            if(s.find(y) != s.end())
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        if(x == 4)
        {
            set <int>::iterator j;
            bool a = 0;
            for(j = s.begin(); j != s.end(); j++)
            {
                if(*j < y)
                {
                    cout << *j;
                    a = 1;
                    break;
                }
            }
            if(!a)
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}