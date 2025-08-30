#include <iostream>
using namespace std;
int u1, c1, t1, u2, c2, t2;
char cmp()
{
    if(u1 != u2)
    {
        if(u1 > u2)
        {
            return 'A';
        }
        return 'B';
    }
    if(c1 != c2)
    {
        if(c1 > c2)
        {
            return 'A';
        }
        return 'B';
    }
    if(t1 < t2)
    {
        return 'A';
    }
    return 'B';
}
int main()
{
    cin >> u1 >> c1 >> t1 >> u2 >> c2 >> t2;
    cout << cmp();
    return 0;
}