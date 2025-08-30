#include <iostream>
#include <map>
#include <cstring>
using namespace std;
map <string, int> a;
int main()
{
    int n, m;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        string s;
        cin >> s;
        a.insert({s, 1});
    }
    cin >> m;
    for(int i = 1; i <= m; i++)
    {
        string s;
        cin >> s;
        if(a.count(s) == 0)
        {
            cout << "WRONG\n";
        }
        else if(a[s] > 1)
        {
            cout << "REPEAT\n";
        }
        else if(a[s] == 1)
        {
            cout << "OK\n";
            a[s]++;
        }
    }
    return 0;
}