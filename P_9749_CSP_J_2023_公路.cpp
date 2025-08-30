#include <iostream>
#include <algorithm>
#include <climits>
#define ll long long
using namespace std;
int a[100005], v[100005];
int main()
{
	int n, d, minn = INT_MAX;
	ll ans = 0, p = 0;
	cin >> n >> d;
	for(int i = 1; i < n; i++)
	{
		cin >> v[i];
	}
	for(int  i = 1; i < n; i++)
	{
		cin >> a[i];
		p += v[i];
		minn = min(minn, a[i]);
		if(p > 0)
		{
			ans += (p + d - 1) / d * minn;
			p -= (p + d - 1) / d * d;
		}
	}
	cout << ans;
	return 0;
}