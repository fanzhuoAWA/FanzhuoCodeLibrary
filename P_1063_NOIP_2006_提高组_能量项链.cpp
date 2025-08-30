#include <iostream>
#include <cstdio>
using namespace std;
int f[205][205], a[205];
int main()
{
	int n, ans = 0;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for(int i = n + 1; i <= n * 2; i++)
	{
		a[i] = a[i - n];
	}
	for(int i = 2; i <= n; i++)
	{
		for(int j = 1; j <= 2 * n - i; j++)
		{
			for(int k = j; k <= j + i - 2; k++)
			{
				f[j][j + i - 1] = max(f[j][k] + f[k + 1][j + i - 1] + a[j] * a[j + i] * a[k + 1], f[j][j + i - 1]);
			}
		}
	}
	for(int i = 1; i <= n; i++)
	{
		if(f[i][n + i - 1] > ans)
		{
			ans = f[i][n + i - 1];
		}
	}
	cout << ans;
	return 0;
}