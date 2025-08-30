#include <iostream>
#include <math.h>
using namespace std;
int a[1005][1005], dp[1005][1005];
int main()
{
	int n, maxn = -1e9;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			cin >> a[i][j];
		}
	}
	dp[1][1] = a[1][1];
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + a[i][j];
			if(dp[i][j] > maxn)
			{
				maxn = dp[i][j];
			}
		}
	}
	cout << maxn;
	return 0;
}