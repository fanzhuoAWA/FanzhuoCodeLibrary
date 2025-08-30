#include <iostream>
using namespace std;
bool a[15];
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        scanf("%d%d", &n, &x);
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for(int i = 1; i <= n; i++)
        {
            if(a[i])
            {
                int x2 = x;
                for(int j = n; j >= 1; j--)
                {
                    if(!a[j])
                    {
                        x2++;
                    }
                    else
                    {
                        break;
                    }
                }
                if(n - i + 1 <= x2)
                {
                    cout << "YES\n";
                    break;
                }
                else
                {
                    cout << "NO\n";
                    break;
                }
            }
        }
    }
    return 0;
}