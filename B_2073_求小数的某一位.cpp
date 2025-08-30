#include <iostream>
using namespace std;
int main()
{
    int a, b, w;
    cin >> a >> b >> w;
    for(int i = 1; i <= w; i++)
    {
        a %= b;
        a *= 10;
    }
    cout << a / b;
    return 0;
}