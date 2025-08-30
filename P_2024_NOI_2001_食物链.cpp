#include <iostream>
using namespace std;
const int N = 5e4;
int n, k, ans;
int f[(N * 3) + 10];
int find(int x)
{
	if(f[x] == x)
	{
		return x;
	}
	return f[x] = find(f[x]);
}
int main()
{
	cin >> n >> k;
	for(int i = 1; i <= n * 3; i++)
	{
		f[i] = i;
	}
	for(int i = 1; i <= k; i++)
	{
		int t, x, y;
		cin >> t >> x >> y;
		if(x > n || y > n)
		{
			ans++;
			continue;
		}
		if(t == 1)//同
		{
			if(find(x + n) == find(y) || find(x) == find(y + n))
			{
				ans++;
				continue;
			}
			f[find(x)]= find(y);
			f[find(x + n)] = find(y + n);
			f[find(x + n + n)] = find(y + n + n);
		}
		else//敌
		{
			if(find(x) == find(y) || find(x + n) == find(y))
			{
				ans++;
				continue;
			}
			f[find(x)] = find(y + n);
			f[find(x + n)] = find(y + n + n);
			f[find(x + n + n)] = find(y); 
		}
	}
	cout << ans;
	return 0;
}