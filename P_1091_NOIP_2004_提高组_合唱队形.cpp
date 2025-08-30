#include <iostream>
#include <cstdio>
using namespace std;
int h[1005], dp[1005][1005];
int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> h[i];
		dp[i][i] = 1;
	}
	for(int i = 2; i <= n; i++)
	{
		for(int j = 1; i + j - 1 <= n; j++)
		{
			int k = i + j - 1;
			if(h[j] < h[j + 1])
			{
				dp[k][j] += dp[k][j + 1];
			}
			if(h[j] < h[k] && j != k - 1)
			{
				dp[k][j] += dp[j + 1][k];
			}
			if(h[k] > h[k - 1])
			{
				dp[j][k] += dp[j][k - 1];
			}
			if(h[k] > h[j] && j != k - 1)
			{
				dp[j][k] += dp[k - 1][j];
			}
			dp[j][k] %= 19650827;
			dp[k][j] %= 19650827;
		}
	}
	cout << (dp[1][n] + dp[n][1]) % 19650827;
	return 0;
}

