#include <iostream>
using namespace std;
int main()
{
    int t, n , m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        if(n == 0 && m % 2 == 0)
        {
            cout << "Yes\n";
        }
        else if(n != 0 && m % 2 != 0)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}