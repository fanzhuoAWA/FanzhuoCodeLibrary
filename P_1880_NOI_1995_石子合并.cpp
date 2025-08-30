#include <iostream>
#include <cstdio>
using namespace std;
int a[2005], sum[2005], f1[2005][2005], f2[2005][2005], s[2005][2005];
int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		a[i + n] = a[i];
		sum[i] = sum[i - 1] + a[i];
		s[i][i] = i;
	}
	for(int i = 1 + n; i <= (n << 1); i++)
	{
		sum[i] = sum[i - 1] + a[i];
		s[i][i] = i;
	}
	for(int i = (n << 1) - 1; i; i--)
	{
		for(int j = i + 1; j <= (n << 1); j++)
		{
			int c = 0, t = 0x3f3f3f3f;
			f2[i][j] = max(f2[i][j - 1], f2[i + 1][j]) + sum[j] - sum[i - 1];
			for(int k = s[i][j - 1]; k <= s[i + 1][j]; k++)
			{
				int tt = f1[i][k] + f1[k + 1][j] + (sum[j] - sum[i - 1]);
				if(tt < t)
				{
					t = tt;
					c = k;
					s[i][j] = c;
				f1[i][j] = t;
				}
			}
		}
	}
	int w = 0, ww = 0x3f3f3f3f;
	for(int i = 1; i <= n; i++)
	{
		w = max(w, f2[i][i + n - 1]);
		ww = min(ww, f1[i][i + n - 1]);
	}
	cout << ww << "\n" << w;
	return 0;
}