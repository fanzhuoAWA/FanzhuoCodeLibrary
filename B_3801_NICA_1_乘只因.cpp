#include <iostream>
using namespace std;
int dp[10][10];
int main()
{
    dp[0][0] = 1;
    for(int i = 1; i <= 8; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            dp[i][j] = dp[i - 1][j - 1] + j * dp[i - 1][j];
        }
    }
    int T;
    cin >> T;
    while(T--)
    {
        int n, k;
        cin >> n >> k;
        int cnt = 0;
        for(int i = 2; i * i <= n; i++)
        {
            if(n % i == 0)
            {
                cnt++;
                while(n % i == 0)
                {
                    n /= i;
                }
            }
        }
        if(n != 1)
        {
            cnt++;
        }
        if(k > cnt)
        {
            cout << "0\n";
            continue;
        }
        cout << dp[cnt][k] << "\n";
    }
    return 0;
}