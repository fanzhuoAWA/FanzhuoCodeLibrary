#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++)
    {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        int cnt = (x == n or x == 1) + (y == m or y == 1);
        if(cnt == 2)
        {
            cout << "2\n";
        }
        else if(cnt == 1)
        {
            cout << "3\n"; 
        }
        else
        {
            cout << "4\n";
        }
    }
    return 0;
}