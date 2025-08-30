#include <iostream>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    for(int i = 1; i <= n; i++)
    {
        cout << "m";
    }
    cout << "\n" << char(65 + h - 1);
    return 0;
}