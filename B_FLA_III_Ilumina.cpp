#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int a, c, ans = -1;
        cin >> a >> c;
        // for(int b = c; b <= a; b++)
        // {
        //     int n = a / b;
        //     if(a / n != b)
        //     {
        //         continue;
        //     }
        //     int m = b / c;
        //     if(b / m != c)
        //     {
        //         continue;
        //     }
        //     ans = b;
        //     break;
        // }
        for(int n = 1; n <= a; n++)
        {
            int b = a / n;
            for(int m = 1; m <= b; m++)
            {
                int c2 = b / m;
                if(c2 == c)
                {
                    ans = b;
                    break;
                }
            }
            if(ans != -1)
            {
                break;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}