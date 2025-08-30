#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    char x;
    cin >> n >> x;
    vector <string> a(n);
    for(auto &i : a)
    {
        cin >> i;
    }
    int maxn = -1e9, minn = 1e9, isma = -1, ismi = -1;
    for(int i = 0; i < n; i++)
    {
        if(a[i][2] == '=')
        {
            if(a[i][1] == '<')//<=
            {
                if(a[i][3] == '-')
                {
                    int num = 0;
                    for(int j = 4; j < a[i].size(); j++)
                    {
                        num = num * 10 + (a[i][j] - '0');
                    }
                    num *= -1;
                    if(num < minn)
                    {
                        minn = num;
                        ismi = 1;
                    }
                }
                else
                {
                    int num = 0;
                    for(int j = 3; j < a[i].size(); j++)
                    {
                        num = num * 10 + (a[i][j] - '0');
                    }
                    if(num < minn)
                    {
                        minn = num;
                        ismi = 1;
                    }
                }
            }
            else
            {
                if(a[i][3] == '-')
                {
                    int num = 0;
                    for(int j = 4; j < a[i].size(); j++)
                    {
                        num = num * 10 + (a[i][j] - '0');
                    }
                    num *= -1;
                    if(num > maxn)
                    {
                        maxn = num;
                        isma = 1;
                    }
                }
                else
                {
                    int num = 0;
                    for(int j = 3; j < a[i].size(); j++)
                    {
                        num = num * 10 + (a[i][j] - '0');
                    }
                    if(num > maxn)
                    {
                        maxn = num;
                        isma = 1;
                    }
                }
            }
        }
        else
        {
            if(a[i][1] == '<')//<=
            {
                if(a[i][2] == '-')
                {
                    int num = 0;
                    for(int j = 3; j < a[i].size(); j++)
                    {
                        num = num * 10 + (a[i][j] - '0');
                    }
                    num *= -1;
                    if(num < minn || (num == minn && ismi == 1))
                    {
                        minn = num;
                        ismi = 0;
                    }
                }
                else
                {
                    int num = 0;
                    for(int j = 2; j < a[i].size(); j++)
                    {
                        num = num * 10 + (a[i][j] - '0');
                    }
                    if(num < minn || (num == minn && ismi == 1))
                    {
                        minn = num;
                        ismi = 0;
                    }
                }
            }
            else
            {
                if(a[i][2] == '-')
                {
                    int num = 0;
                    for(int j = 3; j < a[i].size(); j++)
                    {
                        num = num * 10 + (a[i][j] - '0');
                    }
                    num *= -1;
                    if(num > maxn || (num == maxn && isma == 1))
                    {
                        maxn = num;
                        isma = 0;
                    }
                }
                else
                {
                    int num = 0;
                    for(int j = 2; j < a[i].size(); j++)
                    {
                        num = num * 10 + (a[i][j] - '0');
                    }
                    if(num > maxn || (num == maxn && isma == 1))
                    {
                        maxn = num;
                        isma = 0;
                    }
                }
            }
        }
    }
    if(isma == -1)
    {
        if(ismi == 1)
        {
            cout << x << "<=" << minn << '\n';
        }
        else
        {
            cout << x << "<" << minn << '\n';
        }
    }
    else if(ismi == -1)
    {
        if(isma == 1)
        {
            cout << x << ">=" << maxn << '\n';
        }
        else
        {
            cout << x << ">" << maxn << '\n';
        }
    }
    else
    {
        if(maxn > minn)
        {
            cout << "No Answer!\n";
        }
        else if(maxn < minn)
        {
            cout << maxn << (isma == 1 ? "<=" : "<") << x << (ismi == 1 ? "<=" : "<") << minn << "\n";
        }
        else
        {
            if(isma == 1 && ismi == 1)
            {
                cout << x << "=" << maxn << "\n";
            }
            else
            {
                cout << "No Answer!\n";
            }
        }
    }
    return 0;
}