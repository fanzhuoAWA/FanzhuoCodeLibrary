#include <iostream>
#include <map>
using namespace std;
map <int, int> t;
int a[200005];
int main()
{
	int n, c;
	long long ans = 0;
	cin >> n >> c;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		t[a[i]]++;
	}
	for(int i = 1; i <= n; i++)
	{
		int A = a[i], B = A - c;
		ans += t[B];
	}
	// for(int i = 1; i <= n; i++)
	// {
	// 	for(int j = i + 1; j <= n; j++)
	// 	{
	// 		if(a[i] - a[j] == c)
	// 		{
	// 			cnt++;
	// 		}
	// 	}
	// } j > i &&  a[j] == -c + a[i]
	cout << ans;
	return 0;
}