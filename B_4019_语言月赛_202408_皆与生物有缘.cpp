#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, s1 = 0, s2 = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        s1 += x;
    }
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        s2 += x;
    }
    cout << (int) ceil((double) (s1 + s2) / 2);
    return 0;
}