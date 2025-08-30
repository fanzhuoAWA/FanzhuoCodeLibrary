#include <iostream>
using namespace std;
int main()
{
    int n, apple = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        apple += i;
    }
    cout << apple;
    return 0;
}