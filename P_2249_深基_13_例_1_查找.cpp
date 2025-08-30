#include <iostream>
#include <algorithm>
using namespace std;
int a[1000005];
int main()
{
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for(int i = 1; i <= m; i++)
	{
		int x;
		cin >> x;
		int pos = lower_bound(a + 1, a + 1 + n, x) - a;
		if(pos >= 1 && pos <= n && a[pos] == x)
		{
			cout << pos << " ";
		}
		else
		{
			cout << "-1 ";
		}
	}
	return 0;
}