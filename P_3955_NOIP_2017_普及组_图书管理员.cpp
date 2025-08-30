#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int book[1005];
int main()
{
    int n, q;
    cin >> n >> q;
    for(int i = 1; i <= n; i++)
    {
        cin >> book[i];
    }
    for(int i = 1; i <= q; i++)
    {
        int l, m, minn = 1e9;
        cin >> l >> m;
        for(int j = 1; j <= n; j++)
        {
            int ls = book[j] - m, cut = 0;
            bool flag = true;
            while(ls != 0)
            {
                cut++;
                if(cut <= l)
                {
                    if(ls % 10 != 0)
                    {
                        flag = false;
                        break;
                    }
                    ls /= 10;
                }
                else
                {
                    break;
                }
            }
            if(flag)
            {
                minn = min(minn, book[j]);
            }
        }
        if(minn != 1e9)
        {
            cout << minn << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }
    return 0;
}