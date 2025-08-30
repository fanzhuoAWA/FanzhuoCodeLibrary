#include <iostream>
using namespace std;
int w[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}, f[2005];
int main()
{
    f[0] = 6;
    int n, ans = 0;
    cin >> n;
    for(int i = 1; i <= 2000; i++)
    {
        int k = i;
        while(k >= 1)
        {
            f[i] += w[k % 10];
            k /= 10;
        }
    }
    for(int i = 0; i <= 1000; i++)
    {
        for(int j = 0; j <= 1000; j++)
        {
            if(f[i] + f[j] + f[i + j] == n - 4)
            {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}