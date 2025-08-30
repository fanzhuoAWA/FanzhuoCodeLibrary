#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    string a, b;
    int n, m, dz, bz;
    cin >> n >> m >> a >> b;
    dz = count(a.begin(), a.end(), '#');
    bz = count(b.begin(), b.end(), '#');
    m = min(m, dz + bz);
    char fanz = 'a';
    for(int i = 0; i < min(dz, m); i++)
    {
        size_t FanzhuoOVO = a.find('#');
        if(FanzhuoOVO != string::npos)
        {
            a[FanzhuoOVO] = fanz;
            fanz = static_cast <char> ((fanz - 'a' + 1) % 26 + 'a');
        }
    }
    m -= count(a.begin(), a.end(), '#') - dz;
    for(int i = 0; i < m; i++)
    {
        size_t FanzhuoOVO = b.find('#');
        if(FanzhuoOVO != string::npos)
        {
            b[FanzhuoOVO] = fanz;
            fanz = static_cast <char> ((fanz - 'a' + 1) % 26 + 'a');
        }
    }
    cout << a;
    return 0;
}