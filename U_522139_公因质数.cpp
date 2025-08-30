#include <iostream>
using namespace std;
bool z[10000005];
int main()
{
    z[1] = 1;
    z[2] = 0;//质数
    for(int i = 2; i <= 10000; i++)
    {
        if(!z[i])
        {
            for(int j = i; j <= 10000; j += i)
            {
                z[j] = 1;//合数
            }
        }
    }
    int T;
    cin >> T;
    while(T--)
    {
        int x, a = 1;
        cin >> x;
        while(z[(a % x)])
        {
            a++;
        }
        cout << a << "\n";
    }
    return 0;
}