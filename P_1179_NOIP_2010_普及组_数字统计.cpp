#include <iostream>
using namespace std;
int main()
{
    int l, r, fanzhuo = 0;
    cin >> l >> r;
    for(int i = l; i <= r; i++)
    {
        int x = i;
        while(x != 0)
        {
            if(x % 10 == 2)
            {
                fanzhuo++;
            }
            x /= 10;
        }
    }
    cout << fanzhuo;
    return 0;
}