#include <iostream>
#include <cmath>
using namespace std;
char match[100005];
int siz;
void Pan(int fz)
{
    int a = 0, b = 0;
    for(int i = 0; i < siz; i++)
    {
        if(match[i] == 'W')
        {
            a++;
        }
        if(match[i] == 'L')
        {
            b++;
        }
        if(abs(a - b) >= 2 && (a >= fz || b >= fz))
        {
            cout << a << ":" << b << "\n";
            a = 0;
            b = 0;
        }
    }
    cout << a << ":" << b << "\n";
}
int main()
{
    while(cin >> match[siz] && match[siz] != 'E')
    {
        siz++;
    }
    Pan(11);
    cout << "\n";
    Pan(21);
    return 0;
}